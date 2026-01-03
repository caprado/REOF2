void func_00125f30() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00125f30: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x00125f34: addiu $v0, $zero, 1
    s1 = s0 + 0x48;                                             // 0x00125f44: addiu $s1, $s0, 0x48
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00125f50: lw $v1, 4($s0)
    if (v1 != v0) goto label_0x12608c;                          // 0x00125f54: bne $v1, $v0, 0x12608c
    s2 = *(int32_t*)(s1);                                       // 0x00125f58: lw $s2, 0($s1)
    func_00134c58();  // 134c58                                // 0x00125f5c: jal 0x134c58
    a0 = *(int32_t*)((s0) + 8);                                 // 0x00125f60: lw $a0, 8($s0)
    /* bnezl $v0, 0x12608c */                                   // 0x00125f64: bnezl $v0, 0x12608c
    v1 = *(int32_t*)((s0) + 4);                                 // 0x00125f68: lw $v1, 4($s0)
    a0 = *(int32_t*)((s0) + 0x7c);                              // 0x00125f6c: lw $a0, 0x7c($s0)
    a1 = s0 + 0x68;                                             // 0x00125f70: addiu $a1, $s0, 0x68
    v0 = *(int32_t*)((s0) + 0x78);                              // 0x00125f74: lw $v0, 0x78($s0)
    a2 = s0 + 0x6c;                                             // 0x00125f78: addiu $a2, $s0, 0x6c
    /* call function at address in v0 */                        // 0x00125f7c: jalr $v0
    a3 = s0 + 0x70;                                             // 0x00125f80: addiu $a3, $s0, 0x70
    a0 = *(int32_t*)((s1) + 0x18);                              // 0x00125f84: lw $a0, 0x18($s1)
    a3 = *(int32_t*)((s1) + 0x20);                              // 0x00125f88: lw $a3, 0x20($s1)
    a2 = 2;                                                     // 0x00125f8c: addiu $a2, $zero, 2
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x00125f90: lw $v1, 0x24($s1)
    t1 = a0 - a3;                                               // 0x00125f94: subu $t1, $a0, $a3
    a0 = *(int8_t*)((s0) + 0xe);                                // 0x00125f98: lb $a0, 0xe($s0)
    v0 = (v1 < t1) ? 1 : 0;                                     // 0x00125f9c: slt $v0, $v1, $t1
    a1 = *(int32_t*)((s1) + 4);                                 // 0x00125fa0: lw $a1, 4($s1)
    if (v0 != 0) t1 = v1;                                       // 0x00125fa4: movn $t1, $v1, $v0
    v1 = a3 << 1;                                               // 0x00125fa8: sll $v1, $a3, 1
    t3 = *(int32_t*)((s1) + 0x14);                              // 0x00125fac: lw $t3, 0x14($s1)
    v0 = (a1 < t1) ? 1 : 0;                                     // 0x00125fb0: slt $v0, $a1, $t1
    if (v0 != 0) t1 = a1;                                       // 0x00125fb4: movn $t1, $a1, $v0
    t2 = t3 + v1;                                               // 0x00125fb8: addu $t2, $t3, $v1
    if (a0 != a2) goto label_0x126030;                          // 0x00125fbc: bne $a0, $a2, 0x126030
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00125fc0: lbu $v1, 0xe($s0)
    v0 = *(int32_t*)((s1) + 0x1c);                              // 0x00125fc4: lw $v0, 0x1c($s1)
    v0 = v0 + a3;                                               // 0x00125fcc: addu $v0, $v0, $a3
    v0 = v0 << 1;                                               // 0x00125fd0: sll $v0, $v0, 1
    if (t1 <= 0) goto label_0x12606c;                           // 0x00125fd4: blez $t1, 0x12606c
    t3 = t3 + v0;                                               // 0x00125fd8: addu $t3, $t3, $v0
label_0x125fe0:
    v0 = *(uint8_t*)((a3) + 2);                                 // 0x00125fe0: lbu $v0, 2($a3)
    a0 = t0 << 1;                                               // 0x00125fe4: sll $a0, $t0, 1
    v1 = *(uint8_t*)(a3);                                       // 0x00125fe8: lbu $v1, 0($a3)
    a1 = a0 + t2;                                               // 0x00125fec: addu $a1, $a0, $t2
    v0 = v0 << 8;                                               // 0x00125ff0: sll $v0, $v0, 8
    t0 = t0 + 1;                                                // 0x00125ff4: addiu $t0, $t0, 1
    v1 = v1 | v0;                                               // 0x00125ff8: or $v1, $v1, $v0
    a0 = a0 + t3;                                               // 0x00125ffc: addu $a0, $a0, $t3
    *(uint16_t*)(a1) = v1;                                      // 0x00126000: sh $v1, 0($a1)
    a2 = (t0 < t1) ? 1 : 0;                                     // 0x00126004: slt $a2, $t0, $t1
    v0 = *(uint8_t*)((a3) + 3);                                 // 0x00126008: lbu $v0, 3($a3)
    v1 = *(uint8_t*)((a3) + 1);                                 // 0x0012600c: lbu $v1, 1($a3)
    a3 = a3 + 4;                                                // 0x00126010: addiu $a3, $a3, 4
    v0 = v0 << 8;                                               // 0x00126014: sll $v0, $v0, 8
    v1 = v1 | v0;                                               // 0x00126018: or $v1, $v1, $v0
    if (a2 != 0) goto label_0x125fe0;                           // 0x0012601c: bnez $a2, 0x125fe0
    *(uint16_t*)(a0) = v1;                                      // 0x00126020: sh $v1, 0($a0)
    goto label_0x12606c;                                        // 0x00126024: b 0x12606c
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00126028: lbu $v1, 0xe($s0)
    /* nop */                                                   // 0x0012602c: nop 
label_0x126030:
    if (t1 <= 0) goto label_0x12606c;                           // 0x00126030: blez $t1, 0x12606c
label_0x126040:
    v0 = *(uint8_t*)((a1) + 1);                                 // 0x00126040: lbu $v0, 1($a1)
    t0 = t0 + 1;                                                // 0x00126044: addiu $t0, $t0, 1
    v1 = *(uint8_t*)(a1);                                       // 0x00126048: lbu $v1, 0($a1)
    a1 = a1 + 2;                                                // 0x0012604c: addiu $a1, $a1, 2
    v0 = v0 << 8;                                               // 0x00126050: sll $v0, $v0, 8
    a0 = (t0 < t1) ? 1 : 0;                                     // 0x00126054: slt $a0, $t0, $t1
    v1 = v1 | v0;                                               // 0x00126058: or $v1, $v1, $v0
    *(uint16_t*)(a2) = v1;                                      // 0x0012605c: sh $v1, 0($a2)
    if (a0 != 0) goto label_0x126040;                           // 0x00126060: bnez $a0, 0x126040
    a2 = a2 + 2;                                                // 0x00126064: addiu $a2, $a2, 2
    v1 = *(uint8_t*)((s0) + 0xe);                               // 0x00126068: lbu $v1, 0xe($s0)
label_0x12606c:
    v0 = v1 << 0x18;                                            // 0x0012606c: sll $v0, $v1, 0x18
    v1 = 2;                                                     // 0x00126070: addiu $v1, $zero, 2
    v0 = v0 >> 0x18;                                            // 0x00126074: sra $v0, $v0, 0x18
    *(uint32_t*)((s0) + 4) = v1;                                // 0x00126078: sw $v1, 4($s0)
    /* multiply: t1 * v0 -> hi:lo */                            // 0x0012607c: mult $ac2, $t1, $v0
    *(uint32_t*)((s0) + 0x90) = t1;                             // 0x00126080: sw $t1, 0x90($s0)
    v0 = v0 << 1;                                               // 0x00126084: sll $v0, $v0, 1
    *(uint32_t*)((s0) + 0x94) = v0;                             // 0x00126088: sw $v0, 0x94($s0)
label_0x12608c:
    v0 = 2;                                                     // 0x0012608c: addiu $v0, $zero, 2
    if (v1 != v0) goto label_0x1260b8;                          // 0x00126090: bnel $v1, $v0, 0x1260b8
    v1 = *(int32_t*)((s0) + 0x80);                              // 0x00126098: lw $v1, 0x80($s0)
    a0 = *(int32_t*)((s0) + 0x84);                              // 0x0012609c: lw $a0, 0x84($s0)
    a1 = *(int32_t*)((s0) + 0x94);                              // 0x001260a0: lw $a1, 0x94($s0)
    /* call function at address in v1 */                        // 0x001260a4: jalr $v1
    a2 = *(int32_t*)((s0) + 0x90);                              // 0x001260a8: lw $a2, 0x90($s0)
    v0 = 3;                                                     // 0x001260ac: addiu $v0, $zero, 3
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001260b0: sw $v0, 4($s0)
label_0x1260b8:
    return;                                                     // 0x001260c4: jr $ra
    sp = sp + 0x20;                                             // 0x001260c8: addiu $sp, $sp, 0x20
}