void func_00141390() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00141390: addiu $sp, $sp, -0x10
    a0 = 1;                                                     // 0x00141394: addiu $a0, $zero, 1
    return func_001412a0();  // Tail call                       // 0x001413a0: j 0x1412a0
    sp = sp + 0x10;                                             // 0x001413a4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001413a8: addiu $sp, $sp, -0x10
    a0 = 1;                                                     // 0x001413ac: addiu $a0, $zero, 1
    return func_00141300();  // Tail call                       // 0x001413b8: j 0x141300
    sp = sp + 0x10;                                             // 0x001413bc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001413c0: addiu $sp, $sp, -0x10
    a0 = 2;                                                     // 0x001413c4: addiu $a0, $zero, 2
    return func_001412a0();  // Tail call                       // 0x001413d0: j 0x1412a0
    sp = sp + 0x10;                                             // 0x001413d4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001413d8: addiu $sp, $sp, -0x10
    a0 = 3;                                                     // 0x001413dc: addiu $a0, $zero, 3
    return func_001412a0();  // Tail call                       // 0x001413e8: j 0x1412a0
    sp = sp + 0x10;                                             // 0x001413ec: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001413f0: addiu $sp, $sp, -0x10
    a0 = 4;                                                     // 0x001413f4: addiu $a0, $zero, 4
    return func_001412a0();  // Tail call                       // 0x00141400: j 0x1412a0
    sp = sp + 0x10;                                             // 0x00141404: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141408: addiu $sp, $sp, -0x10
    a0 = 5;                                                     // 0x0014140c: addiu $a0, $zero, 5
    return func_001412a0();  // Tail call                       // 0x00141418: j 0x1412a0
    sp = sp + 0x10;                                             // 0x0014141c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141420: addiu $sp, $sp, -0x10
    a0 = 0x3e8;                                                 // 0x00141424: addiu $a0, $zero, 0x3e8
    return func_001412a0();  // Tail call                       // 0x00141430: j 0x1412a0
    sp = sp + 0x10;                                             // 0x00141434: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141438: addiu $sp, $sp, -0x10
    a0 = 2;                                                     // 0x0014143c: addiu $a0, $zero, 2
    return func_00141300();  // Tail call                       // 0x00141448: j 0x141300
    sp = sp + 0x10;                                             // 0x0014144c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141450: addiu $sp, $sp, -0x10
    a0 = 3;                                                     // 0x00141454: addiu $a0, $zero, 3
    return func_00141300();  // Tail call                       // 0x00141460: j 0x141300
    sp = sp + 0x10;                                             // 0x00141464: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141468: addiu $sp, $sp, -0x10
    a0 = 4;                                                     // 0x0014146c: addiu $a0, $zero, 4
    return func_00141300();  // Tail call                       // 0x00141478: j 0x141300
    sp = sp + 0x10;                                             // 0x0014147c: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141480: addiu $sp, $sp, -0x10
    a0 = 5;                                                     // 0x00141484: addiu $a0, $zero, 5
    return func_00141300();  // Tail call                       // 0x00141490: j 0x141300
    sp = sp + 0x10;                                             // 0x00141494: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x00141498: addiu $sp, $sp, -0x10
    a0 = 0x3e8;                                                 // 0x0014149c: addiu $a0, $zero, 0x3e8
    return func_00141300();  // Tail call                       // 0x001414a8: j 0x141300
    sp = sp + 0x10;                                             // 0x001414ac: addiu $sp, $sp, 0x10
    v1 = 0x21 << 16;                                            // 0x001414b0: lui $v1, 0x21
    v1 = v1 + 0xbf4;                                            // 0x001414b4: addiu $v1, $v1, 0xbf4
    return;                                                     // 0x001414b8: jr $ra
    v0 = g_00210bf4;  // Global at 0x00210bf4                   // 0x001414bc: lw $v0, 0($v1)
}