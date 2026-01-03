void func_00175e58() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00175e58: addiu $sp, $sp, -0x20
    func_00169af0();  // 169af0                                // 0x00175e74: jal 0x169af0
    a1 = 0xff00 << 16;                                          // 0x00175e7c: lui $a1, 0xff00
    if (v0 == 0) goto label_0x175eb0;                           // 0x00175e88: beqz $v0, 0x175eb0
    a1 = a1 | 0x121;                                            // 0x00175e8c: ori $a1, $a1, 0x121
    return func_00169940();  // Tail call                        // 0x00175ea4: j 0x1698d0
    sp = sp + 0x20;                                             // 0x00175ea8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00175eac: nop 
label_0x175eb0:
    goto label_0x175ed0;                                        // 0x00175ec4: j 0x175ed0
    sp = sp + 0x20;                                             // 0x00175ec8: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00175ecc: nop 
label_0x175ed0:
    sp = sp + -0x30;                                            // 0x00175ed0: addiu $sp, $sp, -0x30
    s1 = v0 + 0xda4;                                            // 0x00175ee4: addiu $s1, $v0, 0xda4
    func_00175ff8();  // 175ff8                                // 0x00175efc: jal 0x175ff8
    s3 = v0 + 0xcc0;                                            // 0x00175f00: addiu $s3, $v0, 0xcc0
    a1 = *(int32_t*)(s0);                                       // 0x00175f04: lw $a1, 0($s0)
    v1 = 1;                                                     // 0x00175f08: addiu $v1, $zero, 1
    if (a1 == v1) goto label_0x175f5c;                          // 0x00175f0c: beq $a1, $v1, 0x175f5c
    v0 = *(int32_t*)((s3) + 0x110);                             // 0x00175f14: lw $v0, 0x110($s3)
    if (a1 != v0) goto label_0x175f38;                          // 0x00175f18: bnel $a1, $v0, 0x175f38
    v0 = *(int32_t*)(s1);                                       // 0x00175f1c: lw $v0, 0($s1)
    v1 = *(int32_t*)((s3) + 0x10c);                             // 0x00175f20: lw $v1, 0x10c($s3)
    v0 = *(int32_t*)(s2);                                       // 0x00175f24: lw $v0, 0($s2)
    v0 = v0 + v1;                                               // 0x00175f28: addu $v0, $v0, $v1
    goto label_0x175f58;                                        // 0x00175f2c: b 0x175f58
    *(uint32_t*)(s2) = v0;                                      // 0x00175f30: sw $v0, 0($s2)
    /* nop */                                                   // 0x00175f34: nop 
label_0x175f38:
    /* beqzl $v0, 0x175f5c */                                   // 0x00175f38: beqzl $v0, 0x175f5c
    a2 = *(int32_t*)((s1) + 0x24);                              // 0x00175f40: lw $a2, 0x24($s1)
    func_0015b740();  // 15b740                                // 0x00175f44: jal 0x15b740
    a0 = *(int32_t*)((s1) + 0x20);                              // 0x00175f48: lw $a0, 0x20($s1)
    v1 = *(int32_t*)(s2);                                       // 0x00175f4c: lw $v1, 0($s2)
    v1 = v1 + v0;                                               // 0x00175f50: addu $v1, $v1, $v0
    *(uint32_t*)(s2) = v1;                                      // 0x00175f54: sw $v1, 0($s2)
label_0x175f58:
label_0x175f5c:
    return;                                                     // 0x00175f74: jr $ra
    sp = sp + 0x30;                                             // 0x00175f78: addiu $sp, $sp, 0x30
}