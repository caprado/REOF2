#include <stdint.h>
#include <stdbool.h>

extern void func_00198130(void);  // Original: func_00198130 at 0x197a10
extern void func_00197a10(void);  // Original: func_00197a10 at 0x197760
extern void func_00197760(void);  // Original: func_00197760 at 0x1975e0
extern void func_001975e0(void);  // Original: func_001975e0 at 0x197300
extern void func_001981f0(void);  // Original: func_001981f0 at 0x198130
extern void func_001982c0(void);  // Original: func_001982c0 at 0x1981f0
extern void func_001a0980(void);  // Original: func_001a0980 at 0x1a0970

// Rendering counter global (original: gp - 0x6360 = 0x00259ca0)
#define RENDER_COUNTER_ADDR 0x00259CA0
static uint32_t* g_renderCounter = (uint32_t*)RENDER_COUNTER_ADDR;

// Rendering context globals (original: gp offsets)
#define RENDER_CONTEXT_ADDR 0x00257BA4  // gp - 0x645c
static uint32_t* g_renderContext = (uint32_t*)RENDER_CONTEXT_ADDR;

#define RENDER_WIDTH_ADDR 0x00257BB8    // gp - 0x6448
static uint32_t* g_renderWidth = (uint32_t*)RENDER_WIDTH_ADDR;

#define RENDER_HEIGHT_ADDR 0x00257BB4   // gp - 0x644c
static uint32_t* g_renderHeight = (uint32_t*)RENDER_HEIGHT_ADDR;

#define RENDER_BUFFER_ADDR 0x00257B98   // gp - 0x6468
static uint32_t* g_renderBuffer = (uint32_t*)RENDER_BUFFER_ADDR;

// Transform matrix base (0x00285420-0x0028545c)
#define TRANSFORM_MATRIX_BASE 0x00285420

// Matrix structure (4x4 matrix, 16 floats)
typedef struct TransformMatrix {
    float m[4][4];
} TransformMatrix;

static TransformMatrix* g_transformMatrix = (TransformMatrix*)TRANSFORM_MATRIX_BASE;

// Scale factors
#define SCALE_X_ADDR 0x00257B38  // gp - 0x64c8
static uint32_t* g_scaleXPower = (uint32_t*)SCALE_X_ADDR;

#define SCALE_Y_ADDR 0x00257B34  // gp - 0x64cc
static float* g_scaleX = (float*)SCALE_Y_ADDR;

#define SCALE_Z_ADDR 0x00257B30  // gp - 0x64d0
static float* g_scaleY = (float*)SCALE_Z_ADDR;

// Rendering mode global (original: 0x00290370)
#define RENDER_MODE_ADDR 0x00290370
static uint32_t* g_renderMode = (uint32_t*)RENDER_MODE_ADDR;

/**
 * @category game/rendering
 * @status complete
 * @author caprado
 * @original func_001a0970
 * @address 0x001a0970
 * @description Sets rendering mode to 2.
 *              Simple initialization function that configures the render mode.
 * @windows_compatibility high
 */
void setRenderMode(void) {
    *g_renderMode = 2;
}

/**
 * @category game/rendering
 * @status complete
 * @author caprado
 * @original func_00195ec0
 * @address 0x00195ec0
 * @description Initializes rendering system with transformation matrices.
 *              Sets up rendering context, calculates scale factors based on
 *              next power-of-2 for width/height, and initializes a 4x4
 *              identity-like transformation matrix.
 * @windows_compatibility medium
 */
void initializeRenderingSystem(void) {
    // Call rendering initialization functions
    setRenderMode();  // Original: func_001a0970 at 0x1a0960

    uint32_t context = *g_renderContext;
    func_00198130();  // Original: func_00198130 at 0x197a10, uses context and a1=2
    func_00197a10();  // Original: func_00197a10 at 0x197760, uses context and a1=2
    func_00197760();  // Original: func_00197760 at 0x1975e0, uses context and a1=2
    func_001975e0();  // Original: func_001975e0 at 0x197300
    func_001981f0();  // Original: func_001981f0 at 0x198130
    func_001982c0();  // Original: func_001982c0 at 0x1981f0
    func_001a0980();  // Original: func_001a0980 at 0x1a0970

    // Calculate next power of 2 for width
    uint32_t width = *g_renderWidth;
    uint32_t widthPow2 = 1;
    int widthShift = 0;
    while ((widthPow2 << widthShift) < width) {
        widthShift++;
    }
    widthPow2 = widthPow2 << widthShift;
    *g_scaleXPower = 0;  // Initialize to 0

    // Calculate scale factor: width / widthPow2
    float scaleX = (float)width / (float)widthPow2;
    *g_scaleX = scaleX;

    // Calculate next power of 2 for height
    uint32_t height = *g_renderHeight;
    uint32_t heightPow2 = 1;
    int heightShift = 0;
    while ((heightPow2 << heightShift) < height) {
        heightShift++;
    }
    heightPow2 = heightPow2 << heightShift;

    // Calculate scale factor: height / heightPow2
    float scaleY = (float)height / (float)heightPow2;
    *g_scaleY = scaleY;

    // Initialize transformation matrix (identity-like matrix)
    // First row: [1.0, 0.0, 0.0, 0.0]
    g_transformMatrix->m[0][0] = 1.0f;  // 0x00285420
    g_transformMatrix->m[0][1] = 0.0f;  // 0x00285424
    g_transformMatrix->m[0][2] = 0.0f;  // 0x00285428
    g_transformMatrix->m[0][3] = 0.0f;  // 0x0028542c

    // Second row: [0.0, 1.0, 0.0, 0.0]
    g_transformMatrix->m[1][0] = 0.0f;  // 0x00285430
    g_transformMatrix->m[1][1] = 1.0f;  // 0x00285434
    g_transformMatrix->m[1][2] = 0.0f;  // 0x00285438
    g_transformMatrix->m[1][3] = 0.0f;  // 0x0028543c

    // Third row: [0.0, 0.0, 1.0, 0.0]
    g_transformMatrix->m[2][0] = 0.0f;  // 0x00285440
    g_transformMatrix->m[2][1] = 0.0f;  // 0x00285444
    g_transformMatrix->m[2][2] = 1.0f;  // 0x00285448
    g_transformMatrix->m[2][3] = 0.0f;  // 0x0028544c

    // Fourth row: [0.0, 0.0, 0.0, 1.0]
    g_transformMatrix->m[3][0] = 0.0f;  // 0x00285450
    g_transformMatrix->m[3][1] = 0.0f;  // 0x00285454
    g_transformMatrix->m[3][2] = 0.0f;  // 0x00285458
    g_transformMatrix->m[3][3] = 1.0f;  // 0x0028545c
}

/**
 * @category game/rendering
 * @status complete
 * @author caprado
 * @original func_001ae910
 * @address 0x001ae910
 * @description Processes rendering operations based on counter.
 *              If counter is non-zero, calls rendering function and decrements counter.
 *              This implements a countdown-based rendering trigger system.
 * @windows_compatibility high
 */
void processRenderingCounter(void) {
    // Load current counter value
    uint32_t counter = *g_renderCounter;

    // If counter is zero, nothing to do
    if (counter == 0) {
        return;
    }

    // Call rendering initialization
    initializeRenderingSystem();  // Original: func_00195ec0 at 0x195ea0

    // Decrement and store counter
    counter--;
    *g_renderCounter = counter;
}
