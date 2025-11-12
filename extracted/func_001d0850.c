void func_001d0850() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_18, local_1c;
    
    sp = sp + -0x20;                                            // 0x001d0850: addiu $sp, $sp, -0x20
    at = 0x33 << 16;                                            // 0x001d0854: lui $at, 0x33
    g_0032be54 = a0;  // Global at 0x0032be54                   // 0x001d085c: sw $a0, -0x41ac($at)
    at = 0x33 << 16;                                            // 0x001d0860: lui $at, 0x33
    a0 = g_0032be54;  // Global at 0x0032be54                   // 0x001d0864: lw $a0, -0x41ac($at)
    func_001c9030();  // 0x1c8fa0                                // 0x001d0868: jal 0x1c8fa0
    a1 = sp + 0x18;                                             // 0x001d086c: addiu $a1, $sp, 0x18
    at = 0x33 << 16;                                            // 0x001d0870: lui $at, 0x33
    v0 = 1;                                                     // 0x001d0874: addiu $v0, $zero, 1
    a0 = g_0032be54;  // Global at 0x0032be54                   // 0x001d0878: lw $a0, -0x41ac($at)
    a1 = sp + 0x18;                                             // 0x001d087c: addiu $a1, $sp, 0x18
    local_18 = v0;                                              // 0x001d0880: sw $v0, 0x18($sp)
    func_001c90c0();  // 0x1c9030                                // 0x001d0884: jal 0x1c9030
    local_1c = 0;                                               // 0x001d0888: sw $zero, 0x1c($sp)
    return;                                                     // 0x001d0890: jr $ra
    sp = sp + 0x20;                                             // 0x001d0894: addiu $sp, $sp, 0x20
}