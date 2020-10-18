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