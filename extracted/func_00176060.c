void func_00176060() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00176060: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x0017607c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00176084: lui $a1, 0xff00
    if (v0 == 0) goto label_0x1760b8;                           // 0x00176090: beqz $v0, 0x1760b8
    a1 = a1 | 0x128;                                            // 0x00176094: ori $a1, $a1, 0x128
    return func_00169940();  // Tail call                        // 0x001760ac: j 0x1698d0
    sp = sp + 0x20;                                             // 0x001760b0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001760b4: nop 
label_0x1760b8:
    goto label_0x1760d8;                                        // 0x001760cc: j 0x1760d8
    sp = sp + 0x20;                                             // 0x001760d0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001760d4: nop 
label_0x1760d8:
    sp = sp + -0x40;                                            // 0x001760d8: addiu $sp, $sp, -0x40
    func_00169b88();  // 169b88                                // 0x001760fc: jal 0x169b88
    func_001752e8();  // 1752e8                                // 0x00176108: jal 0x1752e8
    a1 = 0xf;                                                   // 0x0017610c: addiu $a1, $zero, 0xf
    v0 = v0 << 2;                                               // 0x00176114: sll $v0, $v0, 2
    s0 = s1 + 0xcc0;                                            // 0x00176118: addiu $s0, $s1, 0xcc0
    s0 = s0 + v0;                                               // 0x0017611c: addu $s0, $s0, $v0
    v0 = *(int32_t*)(s0);                                       // 0x00176124: lw $v0, 0($s0)
    if (v0 != 0) goto label_0x176138;                           // 0x00176128: bnez $v0, 0x176138
    v0 = 0x17 << 16;                                            // 0x00176130: lui $v0, 0x17
    v0 = v0 + 0x6170;                                           // 0x00176134: addiu $v0, $v0, 0x6170
label_0x176138:
    /* call function at address in v0 */                        // 0x00176138: jalr $v0
    /* nop */                                                   // 0x0017613c: nop 
    func_00169ba0();  // 169ba0                                // 0x00176144: jal 0x169ba0
    return;                                                     // 0x00176164: jr $ra
    sp = sp + 0x40;                                             // 0x00176168: addiu $sp, $sp, 0x40
}