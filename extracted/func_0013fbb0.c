void func_0013fbb0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0013fbb0: addiu $sp, $sp, -0x30
    func_0013ef30();  // 0x13ef18                                // 0x0013fbd4: jal 0x13ef18
    if (s0 != 0) goto label_0x13fc00;                           // 0x0013fbdc: bnez $s0, 0x13fc00
    v0 = 1;                                                     // 0x0013fbe0: addiu $v0, $zero, 1
    v0 = *(int32_t*)((s1) + 0x14);                              // 0x0013fbe4: lw $v0, 0x14($s1)
    v1 = *(int32_t*)((s1) + 0x20);                              // 0x0013fbe8: lw $v1, 0x20($s1)
    a1 = *(int32_t*)((s1) + 0x24);                              // 0x0013fbec: lw $a1, 0x24($s1)
    v1 = v1 - v0;                                               // 0x0013fbf0: subu $v1, $v1, $v0
    goto label_0x13fc1c;                                        // 0x0013fbf4: b 0x13fc1c
    a0 = *(int32_t*)((s1) + 0x10);                              // 0x0013fbf8: lw $a0, 0x10($s1)
    /* nop */                                                   // 0x0013fbfc: nop 
label_0x13fc00:
    if (s0 != v0) goto label_0x13fc38;                          // 0x0013fc00: bnel $s0, $v0, 0x13fc38
    v0 = *(int32_t*)((s1) + 0x38);                              // 0x0013fc04: lw $v0, 0x38($s1)
    v0 = *(int32_t*)((s1) + 0x18);                              // 0x0013fc08: lw $v0, 0x18($s1)
    v1 = *(int32_t*)((s1) + 0x20);                              // 0x0013fc0c: lw $v1, 0x20($s1)
    a1 = *(int32_t*)((s1) + 0x24);                              // 0x0013fc10: lw $a1, 0x24($s1)
    v1 = v1 - v0;                                               // 0x0013fc14: subu $v1, $v1, $v0
    a0 = *(int32_t*)((s1) + 0xc);                               // 0x0013fc18: lw $a0, 0xc($s1)
label_0x13fc1c:
    s0 = v1 + a1;                                               // 0x0013fc1c: addu $s0, $v1, $a1
    v0 = (a0 < s0) ? 1 : 0;                                     // 0x0013fc20: slt $v0, $a0, $s0
    if (v0 != 0) s0 = a0;                                       // 0x0013fc24: movn $s0, $a0, $v0
    v1 = (s0 < s2) ? 1 : 0;                                     // 0x0013fc28: slt $v1, $s0, $s2
    goto label_0x13fc4c;                                        // 0x0013fc2c: b 0x13fc4c
    if (v1 == 0) s0 = s2;                                       // 0x0013fc30: movz $s0, $s2, $v1
    /* nop */                                                   // 0x0013fc34: nop 
label_0x13fc38:
    if (v0 == 0) goto label_0x13fc4c;                           // 0x0013fc38: beqz $v0, 0x13fc4c
    a0 = *(int32_t*)((s1) + 0x3c);                              // 0x0013fc40: lw $a0, 0x3c($s1)
    /* call function at address in v0 */                        // 0x0013fc44: jalr $v0
    a1 = -3;                                                    // 0x0013fc48: addiu $a1, $zero, -3
label_0x13fc4c:
    func_0013ef80();  // 0x13ef30                                // 0x0013fc4c: jal 0x13ef30
    *(uint32_t*)(s3) = s0;                                      // 0x0013fc50: sw $s0, 0($s3)
    v0 = s0 ^ s2;                                               // 0x0013fc54: xor $v0, $s0, $s2
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0013fc5c: sltiu $v0, $v0, 1
    return;                                                     // 0x0013fc70: jr $ra
    sp = sp + 0x30;                                             // 0x0013fc74: addiu $sp, $sp, 0x30
}