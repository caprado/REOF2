void func_001669c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001669c8: addiu $sp, $sp, -0x20
    func_00166b28();  // 0x166a70                                // 0x001669e0: jal 0x166a70
    if (v0 == 0) goto label_0x166a10;                           // 0x001669ec: beqz $v0, 0x166a10
    a1 = 1;                                                     // 0x001669f0: addiu $a1, $zero, 1
    a1 = 0xff00 << 16;                                          // 0x001669f4: lui $a1, 0xff00
    a1 = a1 | 0x408;                                            // 0x00166a00: ori $a1, $a1, 0x408
    return func_00169940();  // Tail call                        // 0x00166a08: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00166a0c: addiu $sp, $sp, 0x20
label_0x166a10:
    func_00177970();  // 0x177950                                // 0x00166a10: jal 0x177950
    a1 = 2;                                                     // 0x00166a1c: addiu $a1, $zero, 2
    if (v0 != 0) goto label_0x166a58;                           // 0x00166a20: bnez $v0, 0x166a58
    func_00177970();  // 0x177950                                // 0x00166a28: jal 0x177950
    /* nop */                                                   // 0x00166a2c: nop 
    a1 = 3;                                                     // 0x00166a34: addiu $a1, $zero, 3
    if (v0 != 0) goto label_0x166a58;                           // 0x00166a38: bnez $v0, 0x166a58
    a2 = 1;                                                     // 0x00166a3c: addiu $a2, $zero, 1
    func_00177970();  // 0x177950                                // 0x00166a40: jal 0x177950
    /* nop */                                                   // 0x00166a44: nop 
    v1 = 2;                                                     // 0x00166a48: addiu $v1, $zero, 2
    if (v0 != 0) a2 = v1;                                       // 0x00166a50: movn $a2, $v1, $v0
label_0x166a58:
    return func_00166ab8();  // Tail call                       // 0x00166a68: j 0x166ab8
    sp = sp + 0x20;                                             // 0x00166a6c: addiu $sp, $sp, 0x20
    v1 = *(int32_t*)((a0) + 4);                                 // 0x00166a70: lw $v1, 4($a0)
    if (v1 == 0) goto label_0x166aac;                           // 0x00166a74: beqz $v1, 0x166aac
    v0 = -1;                                                    // 0x00166a78: addiu $v0, $zero, -1
    v0 = *(int32_t*)(a0);                                       // 0x00166a7c: lw $v0, 0($a0)
    if (v0 != 0) goto label_0x166aac;                           // 0x00166a80: bnez $v0, 0x166aac
    v1 = *(int32_t*)((a0) + 8);                                 // 0x00166a88: lw $v1, 8($a0)
    if (v1 == 0) goto label_0x166aac;                           // 0x00166a8c: beqz $v1, 0x166aac
    v0 = -1;                                                    // 0x00166a90: addiu $v0, $zero, -1
    v1 = *(int32_t*)((a0) + 0xc);                               // 0x00166a94: lw $v1, 0xc($a0)
    if (v1 <= 0) goto label_0x166aac;                           // 0x00166a98: blez $v1, 0x166aac
    /* nop */                                                   // 0x00166a9c: nop 
    v1 = *(int32_t*)((a0) + 0x14);                              // 0x00166aa0: lw $v1, 0x14($a0)
    if (v1 <= 0) goto label_0x166aac;                           // 0x00166aa4: blezl $v1, 0x166aac
label_0x166aac:
    return;                                                     // 0x00166aac: jr $ra
    /* nop */                                                   // 0x00166ab0: nop 
}