void func_001790b8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001790b8: addiu $sp, $sp, -0x20
    s1 = a1 & 0xff;                                             // 0x001790c0: andi $s1, $a1, 0xff
    *(uint32_t*)(s2) = 0;                                       // 0x001790d4: sw $zero, 0($s2)
    func_00178f58();  // 178f58                                // 0x001790d8: jal 0x178f58
    s0 = *(int32_t*)((a0) + 4);                                 // 0x001790dc: lw $s0, 4($a0)
    if (v0 == 0) goto label_0x17910c;                           // 0x001790e4: beqz $v0, 0x17910c
    func_001791f8();  // 1791f8                                // 0x001790ec: jal 0x1791f8
    /* nop */                                                   // 0x001790f0: nop 
    if (v0 == 0) goto label_0x179108;                           // 0x001790f4: beqz $v0, 0x179108
    v0 = 1;                                                     // 0x001790f8: addiu $v0, $zero, 1
    goto label_0x17910c;                                        // 0x001790fc: b 0x17910c
    *(uint32_t*)(s2) = v0;                                      // 0x00179100: sw $v0, 0($s2)
    /* nop */                                                   // 0x00179104: nop 
label_0x179108:
    *(uint32_t*)(s2) = 0;                                       // 0x00179108: sw $zero, 0($s2)
label_0x17910c:
    return;                                                     // 0x0017911c: jr $ra
    sp = sp + 0x20;                                             // 0x00179120: addiu $sp, $sp, 0x20
}