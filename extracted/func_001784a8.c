void func_001784a8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x001784a8: addiu $sp, $sp, -0x40
    func_00169b10();  // 0x169af0                                // 0x001784e0: jal 0x169af0
    s0 = s1 + 0x1cc0;                                           // 0x001784e4: addiu $s0, $s1, 0x1cc0
    a1 = 0xff00 << 16;                                          // 0x001784e8: lui $a1, 0xff00
    a1 = a1 | 0x192;                                            // 0x001784f0: ori $a1, $a1, 0x192
    if (v0 == 0) goto label_0x178528;                           // 0x001784f4: beqz $v0, 0x178528
    v1 = 8;                                                     // 0x001784f8: addiu $v1, $zero, 8
    return func_00169940();  // Tail call                        // 0x0017851c: j 0x1698d0
    sp = sp + 0x40;                                             // 0x00178520: addiu $sp, $sp, 0x40
    /* nop */                                                   // 0x00178524: nop 
label_0x178528:
    s2 = *(int32_t*)((s0) + 0x10);                              // 0x00178528: lw $s2, 0x10($s0)
    if (s2 != v1) goto label_0x178568;                          // 0x0017852c: bne $s2, $v1, 0x178568
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00178530: lw $v0, 8($s0)
    a1 = 0xff00 << 16;                                          // 0x0017853c: lui $a1, 0xff00
    a1 = a1 | 0x602;                                            // 0x00178548: ori $a1, $a1, 0x602
    return func_00169940();  // Tail call                        // 0x00178560: j 0x1698d0
    sp = sp + 0x40;                                             // 0x00178564: addiu $sp, $sp, 0x40
label_0x178568:
    s0 = s6 << 4;                                               // 0x00178568: sll $s0, $s6, 4
    s0 = v0 + s0;                                               // 0x00178570: addu $s0, $v0, $s0
    s0 = s0 + 4;                                                // 0x00178578: addiu $s0, $s0, 4
    func_00178960();  // 0x178920                                // 0x00178584: jal 0x178920
    func_00166c20();  // 0x166bd8                                // 0x00178598: jal 0x166bd8
    return;                                                     // 0x001785c4: jr $ra
    sp = sp + 0x40;                                             // 0x001785c8: addiu $sp, $sp, 0x40
}