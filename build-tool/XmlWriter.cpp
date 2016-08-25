#include "XmlWriter.h"

bt::XmlWriter::XmlWriter(gsl::string_span<> rootName) : nodes_{ detail::XmlNode{rootName} }
{

}

bt::XmlWriter::~XmlWriter() = default;
