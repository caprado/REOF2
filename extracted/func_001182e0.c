void func_001182e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_14, local_4, local_8;
    
    sp = sp + -0x40;                                            // 0x001182e0: addiu $sp, $sp, -0x40
    v1 = -1;                                                    // 0x001182e4: addiu $v1, $zero, -1
    s0 = 0x1f << 16;                                            // 0x001182ec: lui $s0, 0x1f
    v0 = g_001f03e4;  // Global at 0x001f03e4                   // 0x001182f4: lw $v0, 0x3e4($s0)
    if (v0 != v1) goto label_0x118320;                          // 0x001182f8: bne $v0, $v1, 0x118320
    v0 = 1;                                                     // 0x00118300: addiu $v0, $zero, 1
    local_14 = 0;                                               // 0x00118304: sw $zero, 0x14($sp)
    local_4 = v0;                                               // 0x00118308: sw $v0, 4($sp)
    DeleteSema();  // 0x1142e0                                  // 0x00118310: jal 0x1142e0
    local_8 = v0;                                               // 0x00118314: sw $v0, 8($sp)
    g_001f03e4 = v0;  // Global at 0x001f03e4                   // 0x00118318: sw $v0, 0x3e4($s0)
label_0x118320:
    return;                                                     // 0x00118324: jr $ra
    sp = sp + 0x40;                                             // 0x00118328: addiu $sp, $sp, 0x40
}