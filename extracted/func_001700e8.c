void func_001700e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001700e8: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x001700fc: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00170104: lui $a1, 0xff00
    if (v0 == 0) goto label_0x170128;                           // 0x00170108: beqz $v0, 0x170128
    a1 = a1 | 0x189;                                            // 0x00170114: ori $a1, $a1, 0x189
    return func_00169940();  // Tail call                        // 0x00170120: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00170124: addiu $sp, $sp, 0x20
label_0x170128:
    func_00170190();  // 170190                                // 0x0017012c: jal 0x170190
    a1 = 0xff00 << 16;                                          // 0x00170138: lui $a1, 0xff00
    if (a2 != 0) goto label_0x170158;                           // 0x0017013c: bnez $a2, 0x170158
    func_001698d0();  // 1698d0                                // 0x00170144: jal 0x1698d0
    a1 = a1 | 0xf31;                                            // 0x00170148: ori $a1, $a1, 0xf31
    goto label_0x170170;                                        // 0x0017014c: b 0x170170
    v0 = *(int32_t*)((s0) + 0x974);                             // 0x00170150: lw $v0, 0x974($s0)
    /* nop */                                                   // 0x00170154: nop 
label_0x170158:
    v0 = *(int32_t*)((a2) + 4);                                 // 0x00170158: lw $v0, 4($a2)
    v0 = v0 + -1;                                               // 0x0017015c: addiu $v0, $v0, -1
    v1 = (v0 < 0) ? 1 : 0;                                      // 0x00170160: slti $v1, $v0, 0
    if (v1 != 0) v0 = 0;                                        // 0x00170164: movn $v0, $zero, $v1
    *(uint32_t*)((a2) + 4) = v0;                                // 0x00170168: sw $v0, 4($a2)
    v0 = *(int32_t*)((s0) + 0x974);                             // 0x0017016c: lw $v0, 0x974($s0)
label_0x170170:
    v0 = v0 + -1;                                               // 0x00170174: addiu $v0, $v0, -1
    *(uint32_t*)((s0) + 0x974) = v0;                            // 0x0017017c: sw $v0, 0x974($s0)
    return;                                                     // 0x00170184: jr $ra
    sp = sp + 0x20;                                             // 0x00170188: addiu $sp, $sp, 0x20
}