void func_0013f3e0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0013f3e0: addiu $sp, $sp, -0x30
    func_0013ef18();  // 13ef18                                // 0x0013f40c: jal 0x13ef18
    if (s3 == 0) goto label_0x13f454;                           // 0x0013f414: beqz $s3, 0x13f454
    v0 = 1;                                                     // 0x0013f418: addiu $v0, $zero, 1
    if (s3 != v0) goto label_0x13f440;                          // 0x0013f41c: bnel $s3, $v0, 0x13f440
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x0013f420: lw $v0, 0x1c($s0)
    a0 = *(int32_t*)((s0) + 0xc);                               // 0x0013f424: lw $a0, 0xc($s0)
    v0 = (a0 < s2) ? 1 : 0;                                     // 0x0013f428: slt $v0, $a0, $s2
    if (v0 == 0) goto label_0x13f454;                           // 0x0013f42c: beqz $v0, 0x13f454
    goto label_0x13f454;                                        // 0x0013f434: b 0x13f454
    /* nop */                                                   // 0x0013f43c: nop 
label_0x13f440:
    if (v0 == 0) goto label_0x13f454;                           // 0x0013f440: beqz $v0, 0x13f454
    a0 = *(int32_t*)((s0) + 0x20);                              // 0x0013f448: lw $a0, 0x20($s0)
    /* call function at address in v0 */                        // 0x0013f44c: jalr $v0
    a1 = -3;                                                    // 0x0013f450: addiu $a1, $zero, -3
label_0x13f454:
    func_0013ef30();  // 13ef30                                // 0x0013f454: jal 0x13ef30
    *(uint32_t*)(s4) = s1;                                      // 0x0013f458: sw $s1, 0($s4)
    v0 = s1 ^ s2;                                               // 0x0013f45c: xor $v0, $s1, $s2
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x0013f464: sltiu $v0, $v0, 1
    return;                                                     // 0x0013f47c: jr $ra
    sp = sp + 0x30;                                             // 0x0013f480: addiu $sp, $sp, 0x30
}