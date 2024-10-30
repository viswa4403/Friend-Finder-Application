<body>
    <h1>Friend Finder Application</h1>
    <p>The Friend Finder Application is an interactive program designed to match users with compatible "friend bots" based on their preferences and responses to a series of questions. The app simulates chat interactions, allowing users to converse with their matched friends, enhancing the experience of finding a compatible friend virtually.</p>

    <h2>Features</h2>
    <ul>
        <li><strong>User Authentication</strong>:
            <ul>
                <li>New users can create a unique username and password.</li>
                <li>Existing users can log in with their credentials to continue their experience.</li>
            </ul>
        </li>
        <li><strong>Compatibility Matching</strong>:
            <ul>
                <li>The app prompts the user with 15 questions related to lifestyle, preferences, and interests.</li>
                <li>Answers are analyzed and matched with predefined responses of three friend bots: <strong>Paul</strong>, <strong>Sophie</strong>, and <strong>Grace</strong>.</li>
                <li>Based on the matching score, users are provided with up to three potential friends with similar interests.</li>
            </ul>
        </li>
        <li><strong>Interactive Chat</strong>:
            <ul>
                <li>Once a match is found, users can initiate a chat session with their matched friends.</li>
                <li>Users are provided with a list of pre-defined questions to choose from, creating a simulated chat experience with dynamic responses from the bots.</li>
            </ul>
        </li>
    </ul>

    <h2>How to Use</h2>
    <ol>
        <li><strong>Login/Signup</strong>: Start by signing up if you're a new user or logging in if you have an existing account.</li>
        <li><strong>Answer the Compatibility Questions</strong>: Respond to 15 questions about your preferences to help the system find the best match.</li>
        <li><strong>Get Your Match</strong>: Based on your answers, the app calculates your compatibility with Paul, Sophie, and Grace. You'll be informed of the match score and presented with a list of compatible friends.</li>
        <li><strong>Start a Chat</strong>: Choose to chat with your matched friend(s) by selecting from the available questions, and enjoy the interactive conversation.</li>
    </ol>

    <h2>Installation & Requirements</h2>
    <ul>
        <li>This application is written in C and requires a standard C compiler.</li>
        <li>To compile, use a command like <code>gcc -o friend_finder final_friend_finder_application.c</code>.</li>
        <li>Run the executable with <code>./friend_finder</code>.</li>
    </ul>

    <h2>Future Enhancements</h2>
    <ul>
        <li>Expand the question set for a broader compatibility check.</li>
        <li>Allow users to input custom questions in the chat.</li>
        <li>Implement a graphical interface for an enhanced user experience.</li>
    </ul>
</body>

