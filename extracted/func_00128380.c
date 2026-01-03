void func_00128380() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x10;                                            // 0x00128380: addiu $sp, $sp, -0x10
    t0 = 0x1f << 16;                                            // 0x00128384: lui $t0, 0x1f
    v0 = -0x40;                                                 // 0x0012838c: addiu $v0, $zero, -0x40
    t0 = t0 + 0x38d0;                                           // 0x00128390: addiu $t0, $t0, 0x38d0
    t1 = 0x800;                                                 // 0x00128394: addiu $t1, $zero, 0x800
    t0 = t0 & v0;                                               // 0x0012839c: and $t0, $t0, $v0
    goto label_0x128420;                                        // 0x001283a0: j 0x128420
    sp = sp + 0x10;                                             // 0x001283a4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001283a8: addiu $sp, $sp, -0x10
    t0 = 0x1f << 16;                                            // 0x001283ac: lui $t0, 0x1f
    v0 = -0x40;                                                 // 0x001283b4: addiu $v0, $zero, -0x40
    t0 = t0 + 0x38d0;                                           // 0x001283b8: addiu $t0, $t0, 0x38d0
    t1 = 0x800;                                                 // 0x001283bc: addiu $t1, $zero, 0x800
    t0 = t0 & v0;                                               // 0x001283c4: and $t0, $t0, $v0
    return func_00128468();  // Tail call                       // 0x001283c8: j 0x128468
    sp = sp + 0x10;                                             // 0x001283cc: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001283d0: addiu $sp, $sp, -0x10
    t0 = 0x1f << 16;                                            // 0x001283d4: lui $t0, 0x1f
    v0 = -0x40;                                                 // 0x001283dc: addiu $v0, $zero, -0x40
    t0 = t0 + 0x38d0;                                           // 0x001283e0: addiu $t0, $t0, 0x38d0
    t1 = 0x800;                                                 // 0x001283e4: addiu $t1, $zero, 0x800
    t0 = t0 & v0;                                               // 0x001283ec: and $t0, $t0, $v0
    return func_001284a0();  // Tail call                       // 0x001283f0: j 0x1284a0
    sp = sp + 0x10;                                             // 0x001283f4: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001283f8: addiu $sp, $sp, -0x10
    t0 = 0x1f << 16;                                            // 0x001283fc: lui $t0, 0x1f
    v0 = -0x40;                                                 // 0x00128404: addiu $v0, $zero, -0x40
    t0 = t0 + 0x38d0;                                           // 0x00128408: addiu $t0, $t0, 0x38d0
    t1 = 0x800;                                                 // 0x0012840c: addiu $t1, $zero, 0x800
    t0 = t0 & v0;                                               // 0x00128414: and $t0, $t0, $v0
    return func_001284e8();  // Tail call                       // 0x00128418: j 0x1284e8
    sp = sp + 0x10;                                             // 0x0012841c: addiu $sp, $sp, 0x10
label_0x128420:
    sp = sp + -0x20;                                            // 0x00128430: addiu $sp, $sp, -0x20
    func_00128520();  // 128520                                // 0x00128450: jal 0x128520
    local_0 = 0;                                                // 0x00128454: sw $zero, 0($sp)
    return;                                                     // 0x0012845c: jr $ra
    sp = sp + 0x20;                                             // 0x00128460: addiu $sp, $sp, 0x20
}