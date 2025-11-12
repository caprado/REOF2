void func_00170048() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00170048: addiu $sp, $sp, -0x20
    func_00169b10();  // 0x169af0                                // 0x0017005c: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00170064: lui $a1, 0xff00
    if (v0 == 0) goto label_0x170088;                           // 0x00170068: beqz $v0, 0x170088
    a1 = a1 | 0x188;                                            // 0x00170074: ori $a1, $a1, 0x188
    return func_00169940();  // Tail call                        // 0x00170080: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00170084: addiu $sp, $sp, 0x20
label_0x170088:
    func_001701d8();  // 0x170190                                // 0x0017008c: jal 0x170190
    a1 = 0xff00 << 16;                                          // 0x00170098: lui $a1, 0xff00
    if (v1 != 0) goto label_0x1700b8;                           // 0x0017009c: bnez $v1, 0x1700b8
    func_00169940();  // 0x1698d0                                // 0x001700a4: jal 0x1698d0
    a1 = a1 | 0xf30;                                            // 0x001700a8: ori $a1, $a1, 0xf30
    goto label_0x1700c8;                                        // 0x001700ac: b 0x1700c8
    v0 = *(int32_t*)((s0) + 0x974);                             // 0x001700b0: lw $v0, 0x974($s0)
    /* nop */                                                   // 0x001700b4: nop 
label_0x1700b8:
    v0 = *(int32_t*)((v1) + 4);                                 // 0x001700b8: lw $v0, 4($v1)
    v0 = v0 + 1;                                                // 0x001700bc: addiu $v0, $v0, 1
    *(uint32_t*)((v1) + 4) = v0;                                // 0x001700c0: sw $v0, 4($v1)
    v0 = *(int32_t*)((s0) + 0x974);                             // 0x001700c4: lw $v0, 0x974($s0)
label_0x1700c8:
    v0 = v0 + 1;                                                // 0x001700cc: addiu $v0, $v0, 1
    *(uint32_t*)((s0) + 0x974) = v0;                            // 0x001700d4: sw $v0, 0x974($s0)
    return;                                                     // 0x001700dc: jr $ra
    sp = sp + 0x20;                                             // 0x001700e0: addiu $sp, $sp, 0x20
}