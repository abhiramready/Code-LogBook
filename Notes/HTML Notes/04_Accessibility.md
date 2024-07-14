# Accessibility

According to MDN, accessibility is the practice of making your websites usable by as many people as possible. Access by everyone regardless of disability is an essential aspect - Tim Berners-Lee, W3C Director and inventor of the World Wide Web. The World Health Organization's Disability and health fact sheet states that "Over a billion people, about 15% of the world's population, have some form of disability". Developers, designers, and content creators ~ accessibility is everyone's responsibility.

## Assistive software

People with disabilities use different kinds of software/features that assist them in using the web. There are various kinds of software and tools including,

- Magnifier
- Screen readers
- Captions for video/audio
- Eye-tracking devices/software
- Switch devices (a physical switch to use the web)

## WCAG Guidelines (Web Content Accessibility Guidelines)

Web Content Accessibility Guidelines (WCAG) is developed through the W3C process in cooperation with individuals and organizations around the world, with a goal of providing a single shared standard for web content accessibility that meets the needs of individuals, organizations, and governments internationally. WCAG fall under four main principles,

- Perceivable, users must be able to recognize the content
- Operable in different ways like keyboard, voice, etc
- Understandable, use of clear and simple language
- Robust, support different devices and assistive technologies
- [Web Content Accessibility Guidelines (WCAG) Overview](https://www.w3.org/WAI/standards-guidelines/wcag/)
- [WAI-ARIA basics - MDN](https://developer.mozilla.org/en-US/docs/Learn/Accessibility/WAI-ARIA_basics)

## ARIA Standards (**Accessible Rich Internet Applications**)

ARIA Standards define a way to make Web content and Web applications more accessible to people with disabilities. Developers can add specific attributes to our HTML elements to convey semantic information thus improving accessibility. For example, if we had to use a div as a button or checkbox we can simply add the attribute role= “button” or role=”checkbox” and this is conveyed to the assistive software.

## Accessibility checks

There are different validators and software to check for accessibility and areas of improvement. However, we can also

- Use a screen reader to test accessibility
- Use HTML5 elements wherever possible as they are accessible by default
- Browser dev tools like the accessibility tree in Chrome dev tools
- We could perform a lighthouse audit
- Use the WAVE tool (browser plugin) to check for compliance
- Color and contrast in chrome dev tools

## Examples of Accessibility for everyone
Though we don't realize we already use and need accessible web/content everyday for example,

- Captions are handy in a quiet or loud environment
- Hight Contrast content is easily readable under bright sunlight
- Alt tags for media help with slow internet
- Large text size is easy to read for everyone

## Points to remember

- Use Headings only for hierarchy and not their size
- Like many projects now use web components and these components are re-used multiple times, we must make sure they are accessible right from the beginning
- Even social sites ask us to add alt for images (LinkedIn, Instagram), authors/creators also need to take responsibility to make accessible content
-  To improve accessibility, WAI-ARIA provides Web developers with the option to add the following semantic information to Web pages and rich Internet widgets which are then exposed to the browser

## References

- [Accessibility - The State of the Web - Google Chrome Developers](https://www.youtube.com/watch?v=TomOQYxFnrU) 🎥⭐
- [How I do an accessibility check](https://www.youtube.com/watch?v=cOmehxAU_4s) 🎥
- [Web Accessibility Guidelines - How to make your code Web Accessible](https://www.youtube.com/watch?v=H37zF98Er1M) 🎥
- [Accessibility - W3C](https://www.w3.org/standards/webdesign/accessibility)
- [What is accessibility - MDN](https://developer.mozilla.org/en-US/docs/Learn/Accessibility/What_is_accessibility)
