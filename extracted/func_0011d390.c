void func_0011d390() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_24, local_28, local_4, local_8;
    
    sp = sp + -0x50;                                            // 0x0011d390: addiu $sp, $sp, -0x50
    v0 = 1;                                                     // 0x0011d394: addiu $v0, $zero, 1
    local_28 = v0;                                              // 0x0011d3a0: sw $v0, 0x28($sp)
    local_4 = v0;                                               // 0x0011d3a4: sw $v0, 4($sp)
    local_8 = v0;                                               // 0x0011d3a8: sw $v0, 8($sp)
    DeleteSema();  // 0x1142e0                                  // 0x0011d3ac: jal 0x1142e0
    local_24 = v0;                                              // 0x0011d3b0: sw $v0, 0x24($sp)
    v1 = 0x1f << 16;                                            // 0x0011d3b4: lui $v1, 0x1f
    a0 = sp + 0x20;                                             // 0x0011d3b8: addiu $a0, $sp, 0x20
    DeleteSema();  // 0x1142e0                                  // 0x0011d3bc: jal 0x1142e0
    g_001f0a70 = v0;  // Global at 0x001f0a70                   // 0x0011d3c0: sw $v0, 0xa70($v1)
    v1 = 0x1f << 16;                                            // 0x0011d3c4: lui $v1, 0x1f
    g_001f0a74 = v0;  // Global at 0x001f0a74                   // 0x0011d3cc: sw $v0, 0xa74($v1)
    return;                                                     // 0x0011d3d0: jr $ra
    sp = sp + 0x50;                                             // 0x0011d3d4: addiu $sp, $sp, 0x50
}