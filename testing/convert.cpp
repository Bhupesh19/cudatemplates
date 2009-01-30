/* 
  Cuda Templates.

  Copyright (C) 2008 Institute for Computer Graphics and Vision,
                     Graz University of Technology
  
  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 3 of the License, or
  (at your option) any later version.
  
  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
  
  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <cudatemplates/convert.hpp>
#include <cudatemplates/hostmemoryheap.hpp>

using namespace std;


int
main()
{
  Cuda::Size<1> size(256);
  Cuda::HostMemoryHeap<float, 1> obj1(size);
  Cuda::HostMemoryHeap<double, 1> obj2(obj1);
  return 0;
}
