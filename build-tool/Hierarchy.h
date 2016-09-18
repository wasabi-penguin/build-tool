#pragma once

#include <vector>

namespace bt
{
  template<class T>
  class HeirarchyIterator
  {
    ptrdiff_t index_;
  };

  template<class T>
  class ChildRangeIterator
  {

  };

  template<class T>
  class ChildRange
  {

  };

  template<class T>
  class Hierarchy
  {
    std::vector<T> elements_;
    std::vector<ptrdiff_t> offsets_;

  public:

    Hierarchy(T&& root) : elements_{std::forward<T>(root)}
    {
    }

    ~Hierarchy() = default;

    ChildRange<T> children(HeirarchyIterator<T> i)
    {

    }

    bool empty()
    {
      return elements.empty();
    }
  };


}
