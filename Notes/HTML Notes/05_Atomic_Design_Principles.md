# Atomic Design Principles
As the craft of Web design continues to evolve, we’re recognizing the need to develop thoughtful design systems, rather than creating simple collections of web pages. In Chemistry we have atoms that bond to form molecules and they combine to form complex organisms. Similarly, interfaces are made up of smaller components. This means we can break entire interfaces down into fundamental building blocks and work up from there.

- Visual building blocks organized by complexity into different buckets
- Follow a methodology to create a design system by assembling rather than deconstructing
- The atomic design methodology is applied to both design and development workflows, (Thinking in Atomic Design)
- We can create systems that promote consistency and scalability while simultaneously showing things in their final context

## Why Atomic Design

- Why because we should build components, not pages, as of today we build for different devices, scenarios, websites, and apps
- Imagine if we had 200 pages or 200 components, what do we do to scale and make changes? it would be a nightmare
- Traditional methods are inconsistent and it is difficult to convert the design to code and vice versa

## Traditional Framework pitfalls

When we are dependent on a particular framework we are subscribing to others’ work that isn’t tailored for all cases. All sites look similar and it's like one size fits all, also this method isn’t easy to scale, imagine if you had to modify hundreds of pages/components.

## Advantages of Atomic Design

- No need to start with atoms directly, first we can design a few pages and then standardize all of them to extract atoms and molecules progressively
- Making changes will be a piece of cake as you can make changes at one place i.e the atom/molecule and everything gets updated
- Clean folder structure and clean code is maintained naturally as everything is organized into different buckets
- If developers use the concept of components and containers it creates a communication gap with designers, we can do wireframe to production, no need to redo
- It would also be easy to collaborate and onboard new folks as it is easy to understand the context at any point, if you look at the page you’ll see the template and then the organisms in it and next to the molecules and atoms, one place to change and everything gets updated automatically

## Atomic design buckets

- Atoms
- Molecules
- Organisms
- Templates
- Pages

### Atoms

Just like in Chemistry, atoms are the smallest building blocks in our system. Rather than atoms like Oxygen or Hydrogen, in design, we have buttons, inputs, labels, and other small elements that get used throughout our design.

### Molecules

Atoms combine to form molecules to serve one specific purpose with a “do one thing and do it well” mentality. While molecules can be complex, as a rule of thumb they are relatively simple combinations of atoms built for reuse. These molecules form the backbone of a complex system.

### Organisms

Organisms are groups of molecules joined together to form a relatively complex, distinct section of an interface. Building up from molecules to organisms encourages creating standalone, portable, reusable components. Organisms can contain the same/different types of molecules.

### Templates

Templates consist mostly of groups of organisms stitched together to form pages (like page-level components, comprised of groups of organisms). It’s here where we start to see the design coming together and start seeing things like layouts in action.

### Pages

Pages are specific instances of templates, pages provide a hub for everyone to get involved developers, designers, clients

## References

- [Atomic Design - Brad Frost](https://bradfrost.com/blog/post/atomic-web-design/) ⭐⭐
- [Atomic Design - How To Make Web and UI Design Easier - The Futur](https://www.youtube.com/watch?v=W3A33dmp17E) 🎥
- [The Five Ws of Atomic Design - FCC](https://www.youtube.com/watch?v=q7b1W47Fbng) 🎥
