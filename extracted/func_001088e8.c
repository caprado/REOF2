void func_001088e8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x7ff0 << 16;                                          // 0x001088e8: lui $v0, 0x7ff0
    a0 = a0 & v0;                                               // 0x001088f0: and $a0, $a0, $v0
    v1 = 0xfcc0 << 16;                                          // 0x001088f4: lui $v1, 0xfcc0
    a0 = a0 + v1;                                               // 0x001088f8: addu $a0, $a0, $v1
    v0 = -a0;                                                   // 0x001088fc: negu $v0, $a0
    if (a0 <= 0) goto label_0x108928;                           // 0x00108900: blez $a0, 0x108928
    v0 = 0xffff << 16;                                          // 0x00108908: lui $v0, 0xffff
    v1 = -1;                                                    // 0x00108910: addiu $v1, $zero, -1
    a1 = a1 & v0;                                               // 0x00108918: and $a1, $a1, $v0
    a1 = a1 | a2;                                               // 0x0010891c: or $a1, $a1, $a2
    goto label_0x1089ac;                                        // 0x00108920: b 0x1089ac
    a1 = a1 & v1;                                               // 0x00108924: and $a1, $a1, $v1
label_0x108928:
    a0 = v0 >> 0x14;                                            // 0x00108928: sra $a0, $v0, 0x14
    v0 = (a0 < 0x14) ? 1 : 0;                                   // 0x0010892c: slti $v0, $a0, 0x14
    /* beqzl $v0, 0x108968 */                                   // 0x00108930: beqzl $v0, 0x108968
    a0 = a0 + -0x14;                                            // 0x00108934: addiu $a0, $a0, -0x14
    v0 = 8 << 16;                                               // 0x00108938: lui $v0, 8
    v1 = 0xffff << 16;                                          // 0x0010893c: lui $v1, 0xffff
    v0 = v0 >> a0;                                              // 0x00108944: srav $v0, $v0, $a0
    a1 = a1 & v1;                                               // 0x00108948: and $a1, $a1, $v1
    v1 = -1;                                                    // 0x00108950: addiu $v1, $zero, -1
    a1 = a1 | v0;                                               // 0x00108958: or $a1, $a1, $v0
    goto label_0x1089ac;                                        // 0x0010895c: b 0x1089ac
    a1 = a1 & v1;                                               // 0x00108960: and $a1, $a1, $v1
    /* nop */                                                   // 0x00108964: nop 
    v1 = 0xffff << 16;                                          // 0x00108968: lui $v1, 0xffff
    v0 = (a0 < 0x1f) ? 1 : 0;                                   // 0x00108970: slti $v0, $a0, 0x1f
    a2 = ~(0 | a0);                                             // 0x00108974: nor $a2, $zero, $a0
    if (v0 == 0) goto label_0x108990;                           // 0x00108978: beqz $v0, 0x108990
    a1 = a1 & v1;                                               // 0x0010897c: and $a1, $a1, $v1
    v0 = 1;                                                     // 0x00108980: addiu $v0, $zero, 1
    goto label_0x108994;                                        // 0x00108984: b 0x108994
    v0 = v0 << a2;                                              // 0x00108988: sllv $v0, $v0, $a2
    /* nop */                                                   // 0x0010898c: nop 
label_0x108990:
    v0 = 1;                                                     // 0x00108990: addiu $v0, $zero, 1
label_0x108994:
    v1 = -1;                                                    // 0x00108998: addiu $v1, $zero, -1
    a1 = a1 & v1;                                               // 0x001089a4: and $a1, $a1, $v1
    a1 = a1 | v0;                                               // 0x001089a8: or $a1, $a1, $v0
label_0x1089ac:
    return;                                                     // 0x001089b0: jr $ra
    /* nop */                                                   // 0x001089b4: nop 
}