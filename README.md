**Most(More object-oriendted style STL)** is a library which wraps `STL` to make it more `object-oriented style`.

# Status
* it's still in planing
* I'll add it little by little :-)

# Examples
```
std::accumulate(c.begin(), c.end(), T())
// =>
T res = most::accumulate(c, T())

std::accumulate(c.begin() + 1, c.end(), *c.begin())
// =>
decltype(c.front()) res = most::reduce(c)

std::transform(in.begin(), in.end(), out.begin(), f)
// =>
auto out = most::transform(in, f)

str.erase(std::remove(str.begin(), str.end(), ' '), str.end())
// =>
most::remove(str, ' ')

// =>
most::max(vt);

// =>
most::keys(mp);
most::values(mp);

// iostream
most::cout << vt;
```

# Sth
* Add functor/function objects, like `MaxFunctor`?
