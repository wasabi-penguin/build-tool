#pragma once

#include "Hierarchy.h"

#include <gsl.h>
#include <vector>

namespace bt
{
  namespace detail
  {
    struct XmlAttribute
    {
      std::string name_;
      std::string value_;
    };

    struct XmlNode
    {
      std::string name_;
      std::vector<XmlAttribute> attributes_;

      XmlNode(gsl::string_span<> name) : name_ { to_string(name) } {}
    };
  }


  class XmlWriter
  {
    Hierarchy<detail::XmlNode> nodes_;

  public:
    XmlWriter(gsl::string_span<> rootName);
    ~XmlWriter();
  };

  class XmlWriterContext
  {

  };
}
