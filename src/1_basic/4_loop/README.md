**Topic:**
==========
# Vector vs. List
	[http://baptiste-wicht.com/posts/2012/11/cpp-benchmark-vector-vs-list.html]
## C++:
	std::vector is insanely faster than std::list to find an element
	std::vector performs always faster than std::list with very small data
	std::vector is always faster to push elements at the back than std::list
	std::list handles very well large elements, especially for sorting or inserting in the front
## Java:
![Java Collection Hierachy](img/java-collection-hierarchy.jpeg "Java Collection Hierachy")
###Vector:
Vector is almost identical to ArrayList, and the difference is that Vector is synchronized. Because of this, it has an overhead than ArrayList. Normally, most Java programmers use ArrayList instead of Vector because they can synchronize explicitly by themselves.  