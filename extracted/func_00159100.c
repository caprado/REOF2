void func_00159100() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00159100: addiu $sp, $sp, -0x20
    func_0015b498();  // 0x15b470                                // 0x0015911c: jal 0x15b470
    a1 = 0xff03 << 16;                                          // 0x00159124: lui $a1, 0xff03
    if (v0 == 0) goto label_0x159150;                           // 0x0015912c: beqz $v0, 0x159150
    a1 = a1 | 0x20e;                                            // 0x00159130: ori $a1, $a1, 0x20e
    return func_00158c48();  // Tail call                        // 0x00159144: j 0x158bf8
    sp = sp + 0x20;                                             // 0x00159148: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0015914c: nop 
label_0x159150:
    v1 = *(int32_t*)((s0) + 0x288);                             // 0x00159150: lw $v1, 0x288($s0)
    *(uint32_t*)(s1) = v1;                                      // 0x00159158: sw $v1, 0($s1)
    a0 = *(int32_t*)((s0) + 0x28c);                             // 0x00159160: lw $a0, 0x28c($s0)
    *(uint32_t*)(s2) = a0;                                      // 0x00159168: sw $a0, 0($s2)
    return;                                                     // 0x00159170: jr $ra
    sp = sp + 0x20;                                             // 0x00159174: addiu $sp, $sp, 0x20
}