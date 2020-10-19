### Table of contents ###
- [Intro(week1)](#Intro)
	- [Intro](#Intro)
	- [Software Processs](#software-process)
	- [Software Phases](#software-phase)
	- [SLDC Models](#sldc-models)
		- [Waterfall Model](#waterfall-model)
		- [Spiral Model](#spiral-model)
		- [Evolutionary Prototyping](#evolutionary-prototyping)
		- [Rational Unified Process](#rational-unified-process)
		- [Agile Process](#agile-process)
	- [Choosing a model](#choosing-a-model)
- [Week2](#Week2)
	- [Requirements Engineering](#requirements-engineering)
	- [Purpose](#purpose)
	- [Quality](#quality)
	- [Communication](#communication)
	- [Stakeholders](#stakeholders)
	- [Software Intensive System](#software-intensive-system)
	- [Constraints, Capabilities, and Opportunities](#constraints-capabilities-and-opportunities)
	- [Tasks](#tasks)
	- [Requirements](#requirements)
	- [Requirement types](#requirement-types)
	- [Properties of a requirement](#properties-of-a-requirement)
	- [Traceability](#traceability)
	- [Requirement Specification Document](#requirement-specification-document)
	- [Elicit](#elicit)
	- [Analysis](#analysis)
	- [Change Management](#change-management)
	- [RE in practice](#re-in-practice)
	- [Requirements Modeling](#requirements-modeling)
	- [Scenarios](#scenarios)
	- [Use cases](#use-cases)
	- [Object oriented modeling](#object-oriented-modeling)
	- [Classes](#classes)
	- [Object Modeling Technique](#object-modeling-technique)
	- [Unified Modeling Language](#unified-modeling-language)
	- [OO Analysis](#oo-analysis)
- [Week3](#Week3)
- [Week4](#Week4)
- [Week5](#Week5)
- [Week6](#Week6)
- [Week7](#Week7)

### Intro(week1) ###
#### Intro ####
> #### What is software?  
>  
> Defines a set of computations  
> Useful only in presence of human activity  
  

> #### What is Engineering?  
> use of scientific principles to design and build machines, structures, and other items  
  

> #### What is Software Engineering?
> A systematic study of Methodology, Techniques, and Tools to build high quality software that is correct and is built in given time and budget.
#### Software Process ####
> #### What is software process:
> #### Software process helps break the task into several parts that are  
> - Systematic  
> - Formal  
> Examples: Waterfall, Evolutionary, Unified Software Processs and Agile methodology.
#### Software Phases ####
Processes are characterised by phases.
> ### Software Phases:
> 1. Requirements/System Engineering
> 2. Design
> 3. Implementation
> 4. Verification and Validation
> 5. Maintenance
#### SLDC Models ####
> ### Managing Software complexity through Software Development Life Cycle(SLDC) Models
> - Waterfall Model
> - Spiral Model
> - Evolutionary Prototyping
> - Rational Unified Process
> - Agile Methodology  

> ### SDLC steps: Design
> Breakdown requirements to internal components  
>> - Architecture  
>> - UI  
>> - Component  
>> - DS Algo  

> ### SDLC steps: Coding
> Translate design to software  
> Keep a tab on  
>> - Complexity  
>> - Diversity  
>> - Validation  
>> - Standards  

> ### SDLC steps: Verification and Validation  
> - Have we built the right software? - Validation  
> - Have we built the software right? - Verification  
> Done at:  
>> unit, integration, system levels  

> ### SDLC steps: Maintenance
> Deals with issues in the delivered software
>> - Corrective: Bug fixes
>> - Perfective: Enhancements
>> - Adaptive: Environment changes
#### Waterfall Model ####
> Go from one phase to another like a cascading waterfall  
> Software Concept->Requirement Analysis->Architectural design Detailed design-> Coding and debugging->System testing  
> This is a very old process  
> Pros:  
>> - Find errors easily  

> Cons:
>> - Not flexible
#### Spiral Model ####
> Incremental Risk-Oriented Model
>> - Determine Objectives
>> - Identify and Resolve Risks
>> - Develop and test software
>> - Plan next iteration  

> Iterate over.  
> Pros:
>> Risk reduction, Easy to Enhance, Software developed early  

> Cons:
>>  Complex, Dependent on Risk Analysis, Requires Specific Expertise
#### Evolutionary Prototyping ####
> Evolve an initial prototype based on customer feedback  
>> - Start with an initial prototype
>> - Design and implement the prototype
>> - Refine until acceptable
>> - Complete and release  

> Pros:
>> Immediate feedback, helps understand requirements  

> Cons:
>> Difficult to Plan, Can Deteriorate to Code-and-fix
#### Rational Unified Process ####
> Use Unified Modeling Language(UML) to formally capture the order and duration of different activities.  
>> - Inception
>> - Elaboration
>> - Construction
>> - Transition
#### Agile Process ####
> Be more flexible (trading off discipline) in accommodating changes in requirements.  
>> Fail, Pass, Refactor
#### Choosing a model ####
> - Requirements understanding
> - Expected lifetime
> - Risk
> - Schedule Constraints
> - Customer Interaction
> - Expertise
### Week2 ###
#### Requirements Engineering ####
> Establish stakeholders’ needs that are to be satisfied by the software.  
> Why important?
>> - Cost of error correction grows exponentially in maintenance  

> How to get it right?
>> - Elicit  
>> - Analyze
>> - Specify
>> - Validate
>> - Manage  
>> - Iterate
#### Purpose ####
> Software is designed for a purpose.  
> If it's faulty, then either:
>> - Designer didn't understand the purpose and requirements
>> - The software is used in a way it's not intended to be used
>> - Development team is bad.  

> Purpose is often complex.
>> - Many kind of users and activities.
>> - Conflicing user interests.  

> Identifying the purpose is part of Requirement Engineering.  
> Poor understanding of the purpose results in faulty software.
#### Quality ####
> Quality is determining software's fitness for the purpose.
#### Communication ####
> Developer needs to communicate with the user to discover their needs.  
> Communicate system description to stakeholders.  
>> - Users, Customers, Developers, Constituencies.
>> - Formal:  
>>> - Shall statements, document templates, state transition diagrams, detailed mathematical specifications.

>> - Informal:
>>> - User stories, use cases.  

> Making the requirements document id part of RE.
#### Stakeholders ####
> - Everyone who is involved with the software are stakeholders.  
> - Identifying stakeholders and their needs is part of RE.
#### Software Intensive System ####
> A software Intensive System consists of software + hardware + context.
>> - Ex. ATM service. 
>> - User interacts with ATM machine using software which runs on hardware and the context is banking system.  

> Often, hardware and context are ignored. This leads to poor quality software.  
> Identifying context(when and how the software is used) is part of RE.
#### Constraints, Capabilities, and Opportunities ####
> Different stakeholders have different requirements.  
> Irrelevant needs identified create inconsistencies.  
> Identify constraints to know what is possible and what expertise is needed to execute the requirements.
#### Tasks ####
> Establishing the services that the customer requires from the system and the constraints under which it operates and is developed.  
> - Identifying stakeholders and their needs.  
> - Identifying Purpose.  
> - Identifying constraints and their capabilities.  
> - Identifying context.  
> - Develop a software specification.
#### Requirements ####
> Requirements are a part of the system.  
> System analyst and customer together generate it.  
> Should focus on 'what'  
>> - What is the system supposed to do?  
>> - May include what it's not supposed to do.  
>> - Should include error handling and/or recovery methods.  

> Specification comes from both Application domain(Domain properties and requirements) and Machine domain(Computer and program).  
> Specification captures properties that are observed in both domains.  
#### Requirement types ####
> Two types: Functional and Non-Functional.  
> Functional:  
>> - What a system is supposed to do with respect to a set of computations.  
>> - Ex. Press a button to turn on the light.  

> Non-Functional:
>> - Quality, security, interoperability, cost, performance etc.  

> Another distinction: User and system
>> - User requirements: Written for end users in a non techical language.  
>> - System requirements:  Written for developers in a technical language. Developers are expected to find a system based on the aforementioned requirements.  

> Both user and system requirements must be defined.
#### Properties of a requirement ####
> - Should be simple.
> - Should be testable.
> - Should be organised.
>> - Related requirements are grouped.
>> - Priorities indicated(Mandatory, Nice to have, superfluous).  

> - Should be traceable.
#### Traceability ####
> Traceability is the link between requirements, their sources and the system design.
> Source traceability:  
>> - Requirement -> Stakeholder who proposed it.  

> Requirement traceability:
>> - Requirement -> Dependent requirements.  

> Design traceability:  
>> - Requirement -> Design
#### Requirement Specification Document ####
> Can be used as the contract or to bid for a contract.  
> It should be complete and pertinent.
### Week3 ###
#### Elicit ####
> Gathering requirements from various sources:
>> - Stakeholders
>> - Documents(Manuals, papers etc.)
>> - App domain  

> Not a straightforward task because domain knowledge is:
>> - distributed
>> - rarely available in written form
>> - has conflicts with other sources
>> - is noisy(possible changes between observations)
>> - is prone to bias(People may try to influence developers and omit information)  

> Disconnect perception and practice
>> - Customer's perception of a simple 3 step task might involve N steps in practice  

### Elicit - Techniques ###
> Background reading
>> - Used when one is not familiar with the org. and used before interviewing
>> - Sources: e.g. company annual reports, job descriptions
>> - Cons: time consuming, may contain out of date irrelevant data  

> Interviewing
>> - Pros: can uncover a rich set of information through follow-up probing
>> - Cons: reequires specialized skills to interview people  

> Collecting facts and figures through hard data and samples
>> - Which data to collect? What id a sample?
>> - Sources: Financial reports  

> Surveys
>> - Pros: Quickly collect data from large populations, remote administration possible
>> - Cons: Might miss opportunities to collect relevant data  

> Meetings:
>> - Summarization of findings  

> Collaborative, social and cognitive techniques
>> Ex. brainstorming, collecting info about participants by observing them in their environment, finding problem solving methods of participants  

> Summary:
>> - Surveys
>> - Meetings
>> - Hard data and samples
>> - Interviewing
>> - Background reading
#### Analysis ####
> Verification and Validation
>> - Verification: Developers check for SRS conformation(correctness, performance, completeness, pertinence etc.)
>> - Validation: Check if customers' needs are met  

> Outcomes
>> - Feasibility study: checks for time, budget, meeting org. objectives, system integration requirements etc.
>> - Risks identified and addressed
>> - Prioritized list of requirements (mandatory, nice to have, superfluous)
### RE process ###
> Iterate over the 4 activities of RE and perform change management.
>> - elicit->negotiate->analyze->validate->repeat
#### Change management ####
> Accommodating changing requirements  
> Main stages:
>> - Problem analysis: Discuss what is the problem with a requirement and propose changes
>> - Change analysis and costing: Assess effects of change on other requirements
>> - Change implementation: Modify requirements document(and other paperwork) to reflect changes
#### RE in practice ####
> Note that when you iterate/refine:
>> - System design may start emerging.
>> - Discover how system inter-operates with other systems
>>> - This generates design requirements
>>> - System component interaction exposes design alternatives, procedures, data formats etc.


> In practice, we always end up using a bit of design on RE and vice versa.
#### Requirements Modeling ####
> Purpose: structured organization of requirements gathered for analysis and refinement  
> Several ways depending upon focus and objectives / depends on what and how to model.
>> - Organizational / Enterprise modeling e.g. goal modeling
>> - Behavioral / Information modeling e.g. sequence, class, structural diagrams
>> - Modeling quality aspects e.g. task models
>> They are all complementary. Can have a mix of one or more.
>> - Goal Modeling is extremely popular
>>> - a natural way - start with goals and continuously refine them


>> - Natural language for modeling
>> - Unified Modeling Language
#### Scenarios ####
> Effective requirement elicitation technique  
> Captures real-world use cases of the system  
> Desirable features:  
>> - Description of initial condition
>> - Description of normal flow of events
>> - Description of failure scenarios (what can go wrong)
>> - Information about other activities happening simultaneously
>> - Description of end state
#### Use cases ####
> UML’s scenario-based technique  
>> - actors and interactions  

> Should describe all possible interactions with the system  
> Sequence diagrams may be used to add details to use-cases
#### Object oriented modeling ####
> So far, we looked at requirements from a functionality / feature perspective  
> Object orientation is a shift from this perspective that emphasizes data over functions.
### Object orientation ###
> What does it mean to think in terms of object orientation?
>> - Give precedence to data over functions (think: objects, attributes, methods)  
>> - Hide information under well-defined and stable interfaces (think: encapsulation)
>> - Enable incremental refinement and (re)use (think: inheritance and polymorphism)

> Object orientation: Why?
>> - Improve costs
>> - Improve development process
>> - Enforce good design  

> Object oriented analysis and design:
>> - Object orientation lead to OO analysis and design(OOAD)
>>> - Model a software system as a group of interacting objects  

>> - OOA is a requirements analysis technique that focuses on modeling real-world objects  
>> - Developed in the 90’s.  
>> - Influential contributors: Rumbaugh, Booch, Jacobson  

### Objects and instances: ###
> Object is a computational unit  
>> - Has a state and operations that operate on the state.
>> - The state consists of a collection of instance variables or attributes.
>>> - An instance is a specific version of the object  

>> - Send a “message” to an object to invoke/execute an operation (message-passing metaphor in traditional OO thinking)
#### Classes ####
> Template or blueprint for creating objects.(Defines the shape of objects)  
> Has features = attributes + operations  
> New objects created are instances of the class  
> Operations:  prescription or service provided by the class to access the state of an object
>> - Built-in or Primitive types of a language – int, char, float, string, bool etc. have implicitly defined operations(E.g. cannot execute a shift operator on a negative integer)  
>> - Composite types (read: classes) have operations that are implicit as well as those that are explicitly defined.  

> Why do we need classes:  
>> - To define user-defined types / invent new types and extend the language  
#### Object Modeling Technique ####
> Considers 3 aspects while modeling:  
>> - Data – modeled using extensions to entity-relationship (ER) diagrams
>>> - Shows classes and inheritance relationships among classes  

>> -  Functions – modeled using data flow diagrams
>>> - A function becomes a method of a class  

>> - Control – modeled using state machines
>>> -  Represents dynamic aspects i.e. how the system evolved in response to inputs  

> Rumbaugh developed it in 90s.
#### Unified Modeling Language ####
> - Extends OMT  
> - Considers various aspects  
> - Has more diagrams available for modeling  
> - Jacobson and Booch were influential contributors
#### OO Analysis ####
> From real-world objects to requirements  
> Broad guidelines:  
>> - Prepare / obtain textual description of the problem
>> - Identify nouns, which become classes  
>> - Identify adjectives, which become attributes
>> - Identify active verbs, which become operations