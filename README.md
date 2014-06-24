**Most(More object-oriendted style STL)** is a library which wraps `STL` to make it more `object-oriented style`.

# Status
* it's still in planing
* I'll add it little by little :-)

# Examples
```
std::accumulate(c.begin(), c.end(), T())
// =>
most::accumulate(c, T())

std::accumulate(c.begin() + 1, c.end(), *c.begin())
// =>
most::reduce(c)

std::transform(in.begin(), in.end(), out.begin(), f)
// =>
auto out = most::transform(in, f)
```
