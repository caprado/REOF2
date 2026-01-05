void func_0016bb88() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x0016bb88: addiu $sp, $sp, -0x20
    if (s0 == 0) goto label_0x16bbe8;                           // 0x0016bba8: beqz $s0, 0x16bbe8
    func_00169af0();  // 169af0                                // 0x0016bbb0: jal 0x169af0
    /* nop */                                                   // 0x0016bbb4: nop 
    a1 = 0xff00 << 16;                                          // 0x0016bbb8: lui $a1, 0xff00
    if (v0 == 0) goto label_0x16bbe0;                           // 0x0016bbbc: beqz $v0, 0x16bbe0
    a1 = a1 | 0x181;                                            // 0x0016bbc8: ori $a1, $a1, 0x181
    return func_00169940();  // Tail call                        // 0x0016bbd8: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0016bbdc: addiu $sp, $sp, 0x20
label_0x16bbe0:
    v0 = *(int32_t*)((s0) + 0x1b30);                            // 0x0016bbe0: lw $v0, 0x1b30($s0)
    v1 = *(int32_t*)(v0);                                       // 0x0016bbe4: lw $v1, 0($v0)
label_0x16bbe8:
    v0 = s1 ^ 5;                                                // 0x0016bbe8: xori $v0, $s1, 5
    func_0015b368();  // 15b368                                // 0x0016bbf8: jal 0x15b368
    if (v0 != 0) a2 = s2;                                       // 0x0016bbfc: movn $a2, $s2, $v0
    a1 = 0xff00 << 16;                                          // 0x0016bc00: lui $a1, 0xff00
    if (v0 == 0) goto label_0x16bc28;                           // 0x0016bc04: beqz $v0, 0x16bc28
    a1 = a1 | 0xf12;                                            // 0x0016bc10: ori $a1, $a1, 0xf12
    return func_00169940();  // Tail call                        // 0x0016bc20: j 0x1698d0
    sp = sp + 0x20;                                             // 0x0016bc24: addiu $sp, $sp, 0x20
label_0x16bc28:
    return;                                                     // 0x0016bc38: jr $ra
    sp = sp + 0x20;                                             // 0x0016bc3c: addiu $sp, $sp, 0x20
}