void func_001a6cc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    at = 0x2a << 16;                                            // 0x001a6cc0: lui $at, 0x2a
    a2 = 0x1f;                                                  // 0x001a6cc4: addiu $a2, $zero, 0x1f
    g_002a0f68 = 0;  // Global at 0x002a0f68                    // 0x001a6cc8: sw $zero, 0xf68($at)
    at = 0x2a << 16;                                            // 0x001a6ccc: lui $at, 0x2a
    g_002a0f78 = 0;  // Global at 0x002a0f78                    // 0x001a6cd0: sw $zero, 0xf78($at)
    at = 0x2a << 16;                                            // 0x001a6cd4: lui $at, 0x2a
    g_002a0f70 = 0;  // Global at 0x002a0f70                    // 0x001a6cd8: sw $zero, 0xf70($at)
    a0 = 0x2a << 16;                                            // 0x001a6cdc: lui $a0, 0x2a
    a1 = -1;                                                    // 0x001a6ce0: addiu $a1, $zero, -1
    a0 = a0 + 0xf80;                                            // 0x001a6ce4: addiu $a0, $a0, 0xf80
label_0x1a6ce8:
    v1 = a2 << 1;                                               // 0x001a6ce8: sll $v1, $a2, 1
    v1 = v1 + a2;                                               // 0x001a6cec: addu $v1, $v1, $a2
    v1 = v1 << 2;                                               // 0x001a6cf0: sll $v1, $v1, 2
    a2 = a2 + -1;                                               // 0x001a6cf4: addiu $a2, $a2, -1
    v1 = a0 + v1;                                               // 0x001a6cf8: addu $v1, $a0, $v1
    if (a2 >= 0) goto label_0x1a6ce8;                           // 0x001a6cfc: bgez $a2, 0x1a6ce8
    *(uint32_t*)(v1) = a1;                                      // 0x001a6d00: sw $a1, 0($v1)
    return;                                                     // 0x001a6d04: jr $ra
    /* nop */                                                   // 0x001a6d08: nop 
}