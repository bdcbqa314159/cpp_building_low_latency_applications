# Building Low Latency Applications with C++

## Part 1: Introducing C++ concepts and exploring important low-latency applications

### Introducing low-latency application development in C++

In this chapter, we provided an introduction to low latency applications. First, we defined latency-
sensitive and latency-critical applications and different measures of latency. We then discussed
different metrics that are important in low latency applications and other considerations that define
the requirements of low latency applications.
We spent a section of this chapter understanding why C++ is most frequently chosen for low latency
applications across different businesses. Specifically, we discussed the features of the language itself
and also the flexibility and low-level nature of the language, which makes C++ a perfect fit when it
comes to low latency applications.
Finally, we looked at many different examples of low latency applications across different businesses
and the similarities they share. The point of that discussion is that even though the business cases are
different, these applications share a lot of common requirements and features. Again, here, C++ is a
good fit for most (if not all) of these low latency applications in different business areas.
In the next chapter, we will discuss some of the most popular low latency applications in much greater
detail. In this book, we will be using low latency electronic trading as a case study to understand and
apply C++ low latency techniques. However, before we do that, we will explore other low latency
applications such as real-time video streaming, real-time offline and online video gaming applications,
and IoT applications as well.

### Designing some common low-latency applications in C++

In this chapter, we looked at different low latency applications in different business areas. The goals were
to understand how low latency applications impact businesses in different areas and the similarities
that some of these applications share, such as the hardware requirements and optimization, software
design, performance optimization, and different revolutionary technologies being used to achieve
these performance requirements.
The first applications we looked at in detail were real-time, low latency, online video streaming
applications. We discussed different concepts and investigated where high latencies come from, and
how that affects performance and businesses. Finally, we discussed different technologies and solutions,
and platforms that facilitate low latency video streaming applications to be a success.
The next applications we looked at had a lot of overlap with video streaming applications – offline and
online video gaming applications. We introduced some additional concepts and considerations that
apply to offline and online gaming applications and explained their impact on the user experience and
thus, ultimately, on business performance. We discussed a myriad of things to consider when trying to
maximize the performance of these applications, ranging from a lot of factors that apply to live video
streaming applications to additional hardware and software considerations for gaming applications.
We then briefly discussed the requirement of low latency performance when it comes to IoT devices and
retail data collection and analysis applications. This is a relatively new and fast-improving technology
and is likely to continue growing aggressively over the next decade. Lots of research and advancements
are being made for IoT devices and we find new business ideas and use cases as we make progress
here. We discussed how 5G wireless and edge computing technologies are breaking the old paradigm
of central data storage and processing and why that is critical for IoT devices and applications.
The last applications we also discussed briefly in this chapter were low latency electronic trading and
HFT applications. We kept the discussion short and focused on the higher-level ideas when it comes
to maximizing the performance of low latency and ultra-low latency electronic trading applications.
We did so because we will build a full end-to-end C++ low latency electronic trading ecosystem from
scratch in the remaining chapters of this book. When we do that, we will discuss, understand, and
implement all the different low latency C++ concepts and ideas with examples and performance data,
so there is a lot more to come on this application.
We will move on from this discussion of different low latency applications to a more in-depth
discussion of the C++ programming language. We will discuss the correct approach to using C++
for low latency performance, the different modern C++ features, and how to unleash the power of
modern C++ compiler optimizations.

### Exploring C++ concepts from a low-latency application's perspective

In this chapter, first, we discussed general advice that applies to developing low-latency applications
in any programming language. We discussed the ideal software engineering approach when it comes
to these applications and how to think about, design, develop, and evaluate building blocks such as
the data structures and algorithms to use.
We emphasized that when it comes to low-latency application development specifically, the depth of
knowledge on topics such as processor architecture, cache and memory layout and access, how the
C++ programming language works under the hood, and how the compiler works to optimize your
code will dictate your success. Measuring and improving performance is also a critical component
for low-latency applications but we will dive into those details at the end of this book.
We spent a lot of time discussing different C++ principles, constructs, and features with the objective
of understanding how they are implemented at a lower level. The goal here was to unlearn sub-optimal
practices and emphasize some of the ideal aspects of using C++ for low-latency application development.
In the remainder of this book, as we build our low-latency electronic trading exchange ecosystem
(collection of applications that interact with each other), we will reinforce and build on these ideas
we discussed here as we avoid certain C++ features and use others instead.
In the last section of this chapter, we discussed many aspects of the C++ compiler in detail. We tried to
build an understanding of how compilers optimize developers’ high-level code, as in, what techniques
they have at their disposal. We also investigated scenarios in which the compiler fails to optimize a
developer’s code. The goal there was for you to understand how to use a compiler to your advantage
when trying to output the most optimal machine code possible and help the compiler help you avoid
conditions where the compiler fails to optimize. Finally, we looked at the different compiler optimization
flags available for the GNU GCC compiler, which is what we will use in the rest of this book.
We will put our theoretical knowledge into practice in the next chapter where we jump into implementing
some common building blocks of low-latency applications in C++. We will keep our goal of building
these components to be low-latency and highly performant. We will carefully use the principles and
techniques we discussed in this chapter to build these high-performance components. In later chapters,
we will use these components to build an electronic trading ecosystem.
