def clean_text_data(raw_text):
    """
    Attempts to clean text by capitalizing the first letter and removing leading/trailing spaces.
    """
    text = raw_text
    text.capitalize()
    text.strip()
    return text

sample_input = "   hello world   "
cleaned = clean_text_data(sample_input)
print(f"Original: '{sample_input}'")
print(f"Cleaned: '{cleaned}'")

mystery_string = "PythonIsFun"
try:
    mystery_string.remove_char_at(6)
except AttributeError as e:
    print(f"\nAn AttributeError occurred: {e}")
    import traceback
    traceback.print_exc()
except Exception as e:
    print(f"\nAn unexpected error occurred: {e}")