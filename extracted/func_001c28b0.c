void func_001c28b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001c28b0: addiu $sp, $sp, -0x20
    a2 = 0x220;                                                 // 0x001c28bc: addiu $a2, $zero, 0x220
    a0 = 0x31 << 16;                                            // 0x001c28c8: lui $a0, 0x31
    func_00107c70();  // 107c70                                // 0x001c28cc: jal 0x107c70
    a0 = a0 + 0x60b0;                                           // 0x001c28d0: addiu $a0, $a0, 0x60b0
    v0 = 0x22 << 16;                                            // 0x001c28d4: lui $v0, 0x22
    a0 = 0x31 << 16;                                            // 0x001c28d8: lui $a0, 0x31
    v0 = v0 + -0x15e0;                                          // 0x001c28dc: addiu $v0, $v0, -0x15e0
    at = 0x31 << 16;                                            // 0x001c28e0: lui $at, 0x31
    g_003160b8 = v0;  // Global at 0x003160b8                   // 0x001c28e4: sw $v0, 0x60b8($at)
    v1 = s0 << 2;                                               // 0x001c28e8: sll $v1, $s0, 2
    v0 = 0x22 << 16;                                            // 0x001c28ec: lui $v0, 0x22
    at = 0x31 << 16;                                            // 0x001c28f0: lui $at, 0x31
    v0 = v0 + -0x1610;                                          // 0x001c28f4: addiu $v0, $v0, -0x1610
    a0 = a0 + 0x60b0;                                           // 0x001c28f8: addiu $a0, $a0, 0x60b0
    v0 = v0 + v1;                                               // 0x001c28fc: addu $v0, $v0, $v1
    v0 = g_0021e9f0;  // Global at 0x0021e9f0                   // 0x001c2900: lw $v0, 0($v0)
    func_001c27a0();  // 1c27a0                                // 0x001c2904: jal 0x1c27a0
    g_003160bc = v0;  // Global at 0x003160bc                   // 0x001c2908: sw $v0, 0x60bc($at)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001c2910: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001c2914: jr $ra
    sp = sp + 0x20;                                             // 0x001c2918: addiu $sp, $sp, 0x20
}