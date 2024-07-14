# Cross Browser Compatibility

Cross-Browser compatibility describes the issues and strategies behind making sure our applications look and behave in a consistent manner across **as many browsers and platforms as possible,** not all/every browser but most of them. *Cross-browser compatibility is more related to a site’s functionality than its looks.*

As we have so many devices, operating systems, and browsers in the ecosystem, attempting to support all of them has become a significant challenge for front-end developers. Therefore we try to provide an acceptable user experience across different browsers. It is OK for a site to not deliver the exact same experience on all browsers, **as long as the core functionality is accessible in some way.**

## Prerequisites

- Who is the target audience?
- What is the current browser market share among the target users?
- Do more users use IE/mobile? if yes then we need to prioritize on supporting them

## Compatibility matters for users

- Remember that you are not your user
- **Users won’t switch browsers, they’ll switch sites**
- Users have no patience for things that don’t work, and they’ll just go to a competitor’s site instead. Failing at a critical point could turn a potential user away forever.

Many users don’t know how to install a new browser, or even know what a browser is (many users don’t know the difference between a browser, a search engine, and a website). And in most cases even if users knew how to install a new browser, and want to, they might not be able to. Many companies mandate which browsers their employees are allowed to use, and many people use public computers in places like libraries and schools.

## Web Developer Responsibilities

Creating for the web is a skilled discipline, not just a menial task - we all want to take pride in what we do, hone our craft, and demonstrate our mastery of it. **Compatibility === Craft** (Showcase your skill). As a web developer, launched sites are your resumé. A high-quality experience is important to your users, your peers, and your present and future employers. Because your site isn’t purely framework code, and you’re responsible for all of it.

**Writing code that stands up over time, d**elivering information to anyone who requests it; creating rich functionality that works for all: These are the noble goals of a great web developer. But so often, time and business constraints get in the way of such things. You have a hard deadline to hit. Your boss only cares about how the site works on their iPad and hasn’t heard of accessibility. You don’t have time to fix that IE bug in this sprint. We do what we can most of the time, rather than what we’d ideally like to do.

## Solution Strategies

### Fallback

A fallback is a contingency plan – an option or route to be taken when the preferred choice is unavailable. In a lot of scenarios, browsers will have some default fallback behavior already provided for you. Understanding what these fallbacks are and how they behave is an important part of achieving sound compatibility. Though some fallbacks are provided for us, handling them might still mean we have to write some additional code.

### Reset Styles

These are sets of rules you can add to your website, which set a baseline for the way CSS works across browsers. It’s always better to make the CSS reset rule consistent across all browsers as the default settings of these browsers can be different and cause problems. For example, [Normalize.css](https://github.com/necolas/normalize.css/) makes browsers render all elements more consistently and in line with modern standards. It precisely targets only the styles that need normalizing.

### Feature Detection

With feature detection first, we confirm whether a browser supports a certain block of code and then run an alternate piece of code to provide a quality user experience and prevent the site from breaking/crashing. There are two famous strategies for feature detection they are progressive enhancement and feature detection.  

- Progressive Enhancement states that the base user experience will be one with the least features, then increasing the features supported as browser compatibility allows
- Graceful Degradation Stating that the base user experience will be one with the most features, then removing features if a user’s browser doesn’t support it
Fallback Providing a plan B when your plan A isn’t supported in a browser

### Polyfills

In layman’s terms, a polyfill is a piece of code that allows us to use modern browser features on older/unsupported browsers. It is a user-provided fallback/stopgap to allow developers to program against the newest browser APIs while keeping as much compatibility as possible.

### CSS Vendor Prefixes

Browsers use some experimental flags to test certain features before it is officially available or standardized across all browsers. You can try and implement these features right away without worrying about all browsers supporting them, for example, animation styles. Ideally, these prefixes can be used to preview features and shouldn’t be used in production. Prefixes can be annoying but they are temporary as browsers will eventually start supporting all features and there are certain tools like [autoprefixer](https://github.com/postcss/autoprefixer).

## References

- [Dealing with Cross Browser Compatibility - Kevin Powell](https://www.youtube.com/watch?v=9tEixRJ3GeI) 🎥⭐
- [Make the Web Work For Everyone - Mozilla Hacks](https://hacks.mozilla.org/2016/07/make-the-web-work-for-everyone/) ⭐
- [Cross-Browser Compatibility](https://frontend.turing.edu/lessons/module-2/cross-browser-compat.html)
- [CSS Vendor Prefixes](https://www.thoughtco.com/css-vendor-prefixes-3466867)
