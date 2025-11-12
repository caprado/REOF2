void func_001785d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001785d0: addiu $sp, $sp, -0x40
    func_00169b10();  // 0x169af0                                // 0x00178600: jal 0x169af0
    s0 = s1 + 0x1cc0;                                           // 0x00178604: addiu $s0, $s1, 0x1cc0
    a1 = 0xff00 << 16;                                          // 0x00178608: lui $a1, 0xff00
    a1 = a1 | 0x191;                                            // 0x00178610: ori $a1, $a1, 0x191
    if (v0 == 0) goto label_0x178640;                           // 0x00178614: beqz $v0, 0x178640
    v1 = 8;                                                     // 0x00178618: addiu $v1, $zero, 8
    return func_00169940();  // Tail call                        // 0x00178638: j 0x1698d0
    sp = sp + 0x40;                                             // 0x0017863c: addiu $sp, $sp, 0x40
label_0x178640:
    s2 = *(int32_t*)((s0) + 0x10);                              // 0x00178640: lw $s2, 0x10($s0)
    if (s2 != v1) goto label_0x178680;                          // 0x00178644: bne $s2, $v1, 0x178680
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00178648: lw $v0, 8($s0)
    a1 = 0xff00 << 16;                                          // 0x00178654: lui $a1, 0xff00
    a1 = a1 | 0x602;                                            // 0x00178660: ori $a1, $a1, 0x602
    return func_00169940();  // Tail call                        // 0x00178674: j 0x1698d0
    sp = sp + 0x40;                                             // 0x00178678: addiu $sp, $sp, 0x40
    /* nop */                                                   // 0x0017867c: nop 
label_0x178680:
    s0 = s5 << 4;                                               // 0x00178680: sll $s0, $s5, 4
    s0 = v0 + s0;                                               // 0x00178688: addu $s0, $v0, $s0
    s0 = s0 + 4;                                                // 0x00178690: addiu $s0, $s0, 4
    func_00178960();  // 0x178920                                // 0x0017869c: jal 0x178920
    func_00166c20();  // 0x166bd8                                // 0x001786b0: jal 0x166bd8
    return;                                                     // 0x001786d8: jr $ra
    sp = sp + 0x40;                                             // 0x001786dc: addiu $sp, $sp, 0x40
}