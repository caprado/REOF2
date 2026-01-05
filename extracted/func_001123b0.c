/** @category: graphics/dma @status: complete @author: caprado */
void func_001123b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1000 << 16;                                          // 0x001123b0: lui $v0, 0x1000
    a3 = 1;                                                     // 0x001123b4: addiu $a3, $zero, 1
    v0 = v0 | 0x3c10;                                           // 0x001123b8: ori $v0, $v0, 0x3c10
    v1 = 0x1000 << 16;                                          // 0x001123bc: lui $v1, 0x1000
    g_10000000 = a3;  // Global at 0x10000000                   // 0x001123c0: sw $a3, 0($v0)
    v1 = v1 | 0x3c20;                                           // 0x001123c4: ori $v1, $v1, 0x3c20
    v0 = 2;                                                     // 0x001123c8: addiu $v0, $zero, 2
    g_10000000 = v0;  // Global at 0x10000000                   // 0x001123d0: sw $v0, 0($v1)
    /* memory sync */                                           // 0x001123d4: sync 
    a0 = a0 | 0x200;                                            // 0x001123dc: ori $a0, $a0, 0x200
    /* memory sync */                                           // 0x001123e4: sync 0x10
    a1 = 0x1f << 16;                                            // 0x001123e8: lui $a1, 0x1f
    a2 = 0x1000 << 16;                                          // 0x001123ec: lui $a2, 0x1000
    a1 = a1 + 0x280;                                            // 0x001123f0: addiu $a1, $a1, 0x280
    a2 = a2 | 0x5000;                                           // 0x001123f4: ori $a2, $a2, 0x5000
    /* FPU: andi.b $w0, $w0, 0xa4 */                            // 0x001123f8: andi.b $w0, $w0, 0xa4
    v1 = 0x1000 << 16;                                          // 0x001123fc: lui $v1, 0x1000
    v1 = v1 | 0x3000;                                           // 0x00112400: ori $v1, $v1, 0x3000
    /* FPU: adds_a.h $w0, $w0, $w2 */                           // 0x00112408: adds_a.h $w0, $w0, $w2
    return;                                                     // 0x00112410: jr $ra
    g_10000000 = a3;  // Global at 0x10000000                   // 0x00112414: sw $a3, 0($v1)
}