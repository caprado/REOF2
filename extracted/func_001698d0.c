void func_001698d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001698d0: addiu $sp, $sp, -0x20
    if (s1 == 0) goto label_0x16992c;                           // 0x001698e8: beqz $s1, 0x16992c
    if (s0 != 0) goto label_0x169910;                           // 0x001698f0: bnez $s0, 0x169910
    /* nop */                                                   // 0x001698f4: nop 
    a0 = 0x21 << 16;                                            // 0x001698f8: lui $a0, 0x21
    func_00169940();  // 169940                                // 0x001698fc: jal 0x169940
    a0 = a0 + 0x5724;                                           // 0x00169900: addiu $a0, $a0, 0x5724
    goto label_0x16992c;                                        // 0x00169904: b 0x16992c
    /* nop */                                                   // 0x0016990c: nop 
label_0x169910:
    func_00169940();  // 169940                                // 0x00169910: jal 0x169940
    a0 = s0 + 0x98c;                                            // 0x00169914: addiu $a0, $s0, 0x98c
    v0 = *(int32_t*)((s0) + 0x48);                              // 0x00169918: lw $v0, 0x48($s0)
    if (v0 <= 0) goto label_0x169928;                           // 0x0016991c: blez $v0, 0x169928
    v1 = -v0;                                                   // 0x00169920: negu $v1, $v0
    *(uint32_t*)((s0) + 0x48) = v1;                             // 0x00169924: sw $v1, 0x48($s0)
label_0x169928:
label_0x16992c:
    return;                                                     // 0x00169938: jr $ra
    sp = sp + 0x20;                                             // 0x0016993c: addiu $sp, $sp, 0x20
}