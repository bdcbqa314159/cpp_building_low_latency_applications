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

### Building the C++ building blocks for low-latency applications

In this chapter, we jumped into the world of low latency application C++ development. We built some
relatively fundamental but extremely useful building blocks that can be used for a variety of low latency
application purposes. We put into practice a lot of the theoretical discussions related to using C++ and
computer architecture features effectively to build low latency and highly performant applications.
The first component was used to create new threads of execution and run the functions that different
components might require. One important functionality here is being able to control the CPU core
that the newly created thread gets pinned to by setting the thread affinity.
The second component we built was meant to avoid dynamic memory allocation on the critical code
path. We reiterated the inefficiencies associated with dynamic memory allocation and designed a
memory pool to be used to pre-allocate memory from the heap when constructed. Then, we added
utility to the component to allow the allocation and deallocation of objects at runtime without relying
on dynamic memory allocation.
Next, we built a lock-free, First In First Out (FIFO)-style queue to communicate between threads in
an SPSC setup. The important requirement here was that a single reader and a single writer are able
to access the shared data in the queue without using any locks or mutexes. The absence of locks and
mutexes means the absence of context switches, which, as discussed, are a major source of inefficiencies
and latencies in multi-threaded applications.
The fourth component on our list was a framework to facilitate efficient logging for latency-sensitive
applications. Logging is a very important if not mandatory component of all applications, including
low latency applications. However, due to issues such as disk I/O, slow string formatting, and so on,
traditional logging mechanisms such as writing to a log file on disk is impractical for use with low
latency applications. To build this component, we used the multi-threading mechanism we built, as
well as the lock-free FIFO queue.
Finally, we had an in-depth discussion about designing our network stack – how to create network
sockets, how to use them to create TCP servers and clients, and how to use them to publish and
consume multicast traffic. We have not used this last component yet, but we will use this component
in subsequent chapters to facilitate communication between our electronic trading exchange and
different market participants.
Now, we will move on to a case study project, which we will build in the rest of this book – our
electronic trading ecosystem. In the next chapter, we will first focus on designing and understanding
the higher-level design of the various components in our system. We will understand the purpose
of these components, the motivation behind their design choices, and how the flow of information
occurs in the system. The next chapter will also see us designing the higher-level C++ interfaces that
we will implement in the rest of this book.

## Part 2: Building a live trading exchange in C++

### Designing our trading ecosystem

This concludes our discussion of the details and design of the major components in our electronic
trading ecosystem. Let us summarize the concepts, components, and interactions we discussed, as
well as the design of the components that build the electronic trading ecosystem we will build.
We started off by presenting the topology of the electronic trading ecosystem. This consists of the
electronic trading exchange and many market participants that want to trade on that exchange. The
electronic trading exchange infrastructure itself consists of three major components at a high level –
the matching engine, the market data publisher, and the order gateway server infrastructure. From a
market participant’s perspective, the major components are the market data subscriber and consumer,
the trading strategy framework with all its subcomponents, and the order gateway client infrastructure.
Next, we performed a deep dive into the exchange matching engine details. We explained the
responsibilities of this component and how it builds, maintains, and updates the limit order book
and matches participant orders that cross against each other. We concluded that section by designing
our simplified matching engine component and its subcomponents, which we will implement in the
next chapter.
The next topics of discussion were the market data publisher and the order gateway server infrastructure
at the exchange. We described in great detail the different messages that the market data feed is
composed of, the market data feed protocol, as well as designing the components inside the market
data publisher. We also discussed the order gateway server, which the exchange hosts as an endpoint
for the market participants to connect to, forward order requests, and receive order responses and
notifications for their orders getting executed by the matching engine. We presented the design of the
order gateway server with all its subcomponents, which we will implement in later chapters of this book.
The section following that took a look at the market participants’ trading systems. First, we discussed the
details for the market data consumer and the order gateway client infrastructure, which the participants
use to consume the public market data feed from the exchange and connect to and communicate with
the exchange. We also presented and discussed the design of the market data consumer we will build,
as well as how it synchronizes and decodes the exchange market data feed. Finally, we designed the
order gateway client infrastructure, which the trading system will use to connect to and communicate
with the exchange’s order gateway server infrastructure.
The final section of this chapter was dedicated to describing and designing the framework for trading
strategies. We described the major components we will need to build this framework – the order book,
the feature engine, the execution logic framework, and the risk management subcomponent. Finally, we
laid out the design of the trading infrastructure we will build so that you can understand the higher-
level design of this component before we dive into the lower-level details in subsequent chapters.
The next chapter jumps into the implementation details of the matching engine framework we
designed in this chapter. Note that we will reuse a lot of the basic building blocks we built in the
previous chapter moving forward as we implement our electronic trading ecosystem. The motivation
for building the basic building blocks will become clearer as we implement the rest of the system,
starting in the next chapter.

### Building the C++ matching engine

We started the C++ implementation of our electronic trading ecosystem in this chapter. The first
component we built was the exchange matching engine in charge of accepting and answering order
requests from the order server component in the exchange infrastructure. This component is also
responsible for generating and publishing market data updates to the market data publisher component
in the exchange’s infrastructure.
First, we declared some assumptions in our matching engine and limit order books. We also defined
a couple of basic Plain Old Data (POD)-style structures to encapsulate information for a single order
in the limit order book, a single order request sent from the order server, an order response sent back
to the order server, and a single market data update. We showed how to use the lock-free queue to
facilitate communication between the matching engine and order server and market data publisher
for order requests, order responses, and market data updates. To build the limit order book, we also
defined some hash maps to track orders by OrderId and chain together orders at the same price
inside the MEOrdersAtPrice structure. Reiterating what we already covered, these price levels
themselves are maintained in a doubly linked list and a hash map indexed by price.
Then, we built the matching engine component, which is an independent thread of execution that
consumes updates from the order server and publishes responses and market data updates back to
the order server and the market data publisher. We also built the main application binary for the
electronic trading exchange, which we will enhance in the next chapter.
Finally, we laid out the details of the mechanism involved in building and updating the data structures
for the limit order book. We discussed the tasks involved in handling new order requests and order
cancelation requests. We also implemented the functionality of the matching engine to perform the
actual matching between new aggressive orders against existing passive orders that cross in price.
Match events generate private execution messages for the market participants involved in a match
event. Additionally, the event also generates trade messages and order deletion or modification on
the public market data feed.
In the next chapter, we will build the market data publisher component, which is the component that
consumes the market data updates generated from the matching engine and puts them on the wire for
participants to consume. Additionally, we will also build the order server component that resides in
the electronic trading exchange and manages the communication with the different market participant
order gateways, forwarding requests and responses to and from the matching engine.