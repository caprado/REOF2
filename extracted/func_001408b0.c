void func_001408b0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001408b0: addiu $sp, $sp, -0x10
    a1 = 0x25 << 16;                                            // 0x001408b4: lui $a1, 0x25
    a1 = a1 + 0x5d80;                                           // 0x001408bc: addiu $a1, $a1, 0x5d80
    g_00255d80 = a0;  // Global at 0x00255d80                   // 0x001408c0: sw $a0, 0($a1)
    a0 = 0x23;                                                  // 0x001408c4: addiu $a0, $zero, 0x23
    a2 = 1;                                                     // 0x001408cc: addiu $a2, $zero, 1
    return func_00139228();  // Tail call                        // 0x001408d8: j 0x139120
    sp = sp + 0x10;                                             // 0x001408dc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001408e0: addiu $sp, $sp, -0x10
    a1 = 0x25 << 16;                                            // 0x001408e4: lui $a1, 0x25
    s0 = 0x25 << 16;                                            // 0x001408ec: lui $s0, 0x25
    a1 = a1 + 0x5d80;                                           // 0x001408f0: addiu $a1, $a1, 0x5d80
    s0 = s0 + 0x5e80;                                           // 0x001408f4: addiu $s0, $s0, 0x5e80
    g_00255d80 = a0;  // Global at 0x00255d80                   // 0x00140900: sw $a0, 0($a1)
    a0 = 0x24;                                                  // 0x00140904: addiu $a0, $zero, 0x24
    a2 = 1;                                                     // 0x00140908: addiu $a2, $zero, 1
    func_00139228();  // 0x139120                                // 0x0014090c: jal 0x139120
    t0 = 4;                                                     // 0x00140910: addiu $t0, $zero, 4
    v1 = 0x25 << 16;                                            // 0x00140914: lui $v1, 0x25
    a3 = g_00255e8c;  // Global at 0x00255e8c                   // 0x00140918: lw $a3, 0xc($s0)
    v1 = v1 + 0x5d40;                                           // 0x0014091c: addiu $v1, $v1, 0x5d40
    a2 = g_00255e80;  // Global at 0x00255e80                   // 0x00140920: lw $a2, 0($s0)
    a0 = g_00255e84;  // Global at 0x00255e84                   // 0x00140928: lw $a0, 4($s0)
    a1 = g_00255e88;  // Global at 0x00255e88                   // 0x0014092c: lw $a1, 8($s0)
    g_00255d40 = a2;  // Global at 0x00255d40                   // 0x00140938: sw $a2, 0($v1)
    g_00255d44 = a0;  // Global at 0x00255d44                   // 0x0014093c: sw $a0, 4($v1)
    g_00255d48 = a1;  // Global at 0x00255d48                   // 0x00140940: sw $a1, 8($v1)
    g_00255d4c = a3;  // Global at 0x00255d4c                   // 0x00140944: sw $a3, 0xc($v1)
    return;                                                     // 0x00140948: jr $ra
    sp = sp + 0x10;                                             // 0x0014094c: addiu $sp, $sp, 0x10
}