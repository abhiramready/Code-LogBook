# Mobile-First Approach

Mobile-first approach is the process of planning and developing a website keeping in mind the mobile users first. We write our CSS first for mobile devices and then use media queries to add styling for larger screen sizes. Mobile-first designs pay special attention to anything clickable, focusing on thumb-friendly navigation.

Conventionally we might start with a desktop approach however when we start implementing it we can start mobile-first. It might look like more work, however, in the long run, it'll save a ton of time and code. However, sometimes there can be exceptions, a few components look completely different on different screen sizes, such as navigation menus. Other times, we have styles on mobile that need to be overwritten for desktop that ends up being redundant. (min-width usage is the key).

## Why Mobile-first

- Based on current usage data almost half of the world’s internet users (more than 50%) browse the web via smartphones
- Mobile usage vs desktop usage comparison also shows that 58% of online purchases happen on mobile devices (Source: Merchant Savvy)
- It’s about creating a website that not only works on mobile devices but is *designed* *for* users on mobile devices (mobile-first and not just mobile-friendly)

## Advantages of Mobile-first

- Pages load faster on mobile
- Good user experience encourages fast purchases
- Search engines like Google assign good ranks to sites that follow Mobile-first indexing
- A mobile-first website is always responsive, but a responsive website isn’t always mobile-first.

## What about Responsive design

Mobile-first is a design strategy, whereas responsive design is the result of a more technical approach. Responsive web designs *respond* to changes in device display sizes, it's like water: it will fit into whatever you pour it. Because it shifts and adapts content to fit other devices, rather than taking into consideration the user experience on those devices, which is bad for everyone.

Websites are often designed/created under the assumption that visitors will browse via a desktop computer. Later on, the website undergoes modifications to allow it to be browsed on different devices like smartphones and tablets. As we can see the website and its contents are scaled-down (graceful degradation) and to combat this, designers adopted a new approach titled progressive enhancement or mobile-first strategy. This involves designing a website for the smallest device possible and then allowing yourself to adapt to desktop computers by scaling upwards. So that we prioritize content/presentation and a consistent user experience.

## Desktop first approach can be redundant

In general, websites are naturally responsive before we even write a single line of CSS and when we style for desktop-first, we add widths, columns, and move things around as we have more real estate to work with. Now for mobile, we start resetting things like display and width back to their default state, this means we are writing something that could have been avoided. 

## References

- [Responsive CSS is the wrong way? - Kevin Powell](https://www.youtube.com/watch?v=0ohtVzCSHqs) 🎥⭐
- [Mobile-First Indexing - Google Search Central](https://www.youtube.com/watch?v=TTUzxHdx2jY) 🎥
- [Right Approach to Responsive Web Design](https://www.freecodecamp.org/news/taking-the-right-approach-to-responsive-web-design/)
- [Mobile-First vs Responsive Web Design](https://ester.co/blog/mobile-first-vs-responsive-web-design) ⭐
- [Develop and Test a Mobile-First Design](https://css-tricks.com/how-to-develop-and-test-a-mobile-first-design-in-2021/)
