/** @category: graphics/dma @status: complete @author: caprado */
void func_00113448() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    a3 = a3 << 0x10;                                            // 0x00113448: sll $a3, $a3, 0x10
    a2 = a2 << 0x10;                                            // 0x0011344c: sll $a2, $a2, 0x10
    t0 = t0 << 0x10;                                            // 0x00113450: sll $t0, $t0, 0x10
    t5 = a3 >> 0x10;                                            // 0x00113454: sra $t5, $a3, 0x10
    sp = sp + -0x10;                                            // 0x00113458: addiu $sp, $sp, -0x10
    a1 = a1 << 0x10;                                            // 0x0011345c: sll $a1, $a1, 0x10
    t1 = t1 << 0x10;                                            // 0x00113460: sll $t1, $t1, 0x10
    t2 = t2 << 0x10;                                            // 0x00113464: sll $t2, $t2, 0x10
    t3 = t3 << 0x10;                                            // 0x00113468: sll $t3, $t3, 0x10
    t4 = a2 >> 0x10;                                            // 0x0011346c: sra $t4, $a2, 0x10
    t7 = t0 >> 0x10;                                            // 0x00113470: sra $t7, $t0, 0x10
    a3 = a1 >> 0x10;                                            // 0x00113478: sra $a3, $a1, 0x10
    t8 = t1 >> 0x10;                                            // 0x0011347c: sra $t8, $t1, 0x10
    t2 = t2 >> 0x10;                                            // 0x00113480: sra $t2, $t2, 0x10
    t0 = t3 >> 0x10;                                            // 0x00113484: sra $t0, $t3, 0x10
    v0 = ((unsigned)t5 < (unsigned)0x3b) ? 1 : 0;               // 0x0011348c: sltiu $v0, $t5, 0x3b
    if (v0 == 0) goto label_0x1134f4;                           // 0x00113490: beqz $v0, 0x1134f4
    v0 = 0x22 << 16;                                            // 0x00113498: lui $v0, 0x22
    v1 = t5 << 2;                                               // 0x0011349c: sll $v1, $t5, 2
    v0 = v0 + 0x1070;                                           // 0x001134a0: addiu $v0, $v0, 0x1070
    v1 = v1 + v0;                                               // 0x001134a4: addu $v1, $v1, $v0
    a0 = *(int32_t*)(v1);                                       // 0x001134a8: lw $a0, 0($v1)
    /* jump to address in a0 */                                 // 0x001134ac: jr $a0
    /* nop */                                                   // 0x001134b0: nop 
    /* multiply: t2 * t0 -> hi:lo */                            // 0x001134b4: mult $ac2, $t2, $t0
    goto label_0x1134f4;                                        // 0x001134b8: b 0x1134f4
    a2 = v0 >> 2;                                               // 0x001134bc: sra $a2, $v0, 2
    /* multiply: t2 * t0 -> hi:lo */                            // 0x001134c0: mult $ac3, $t2, $t0
    v0 = v1 << 1;                                               // 0x001134c4: sll $v0, $v1, 1
    v0 = v0 + v1;                                               // 0x001134c8: addu $v0, $v0, $v1
    goto label_0x1134f4;                                        // 0x001134cc: b 0x1134f4
    a2 = v0 >> 4;                                               // 0x001134d0: sra $a2, $v0, 4
    /* multiply: t2 * t0 -> hi:lo */                            // 0x001134d4: mult $ac2, $t2, $t0
    goto label_0x1134f4;                                        // 0x001134d8: b 0x1134f4
    a2 = v0 >> 3;                                               // 0x001134dc: sra $a2, $v0, 3
    /* multiply: t2 * t0 -> hi:lo */                            // 0x001134e0: mult $ac2, $t2, $t0
    goto label_0x1134f4;                                        // 0x001134e4: b 0x1134f4
    a2 = v0 >> 4;                                               // 0x001134e8: sra $a2, $v0, 4
    /* multiply: t2 * t0 -> hi:lo */                            // 0x001134ec: mult $ac2, $t2, $t0
    a2 = v0 >> 5;                                               // 0x001134f0: sra $a2, $v0, 5
label_0x1134f4:
    v0 = 0x7fff;                                                // 0x001134f4: addiu $v0, $zero, 0x7fff
    v0 = (v0 < a2) ? 1 : 0;                                     // 0x001134f8: slt $v0, $v0, $a2
    if (v0 == 0) goto label_0x113514;                           // 0x001134fc: beqz $v0, 0x113514
    a0 = 0x22 << 16;                                            // 0x00113500: lui $a0, 0x22
    func_00116508();  // 116508                                // 0x00113504: jal 0x116508
    a0 = &str_00221040;  // "sceGsExecLoadImage: DMA Ch.2 does not terminate\r\n" // 0x00113508: addiu $a0, $a0, 0x1040
    goto label_0x113620;                                        // 0x0011350c: b 0x113620
label_0x113514:
    v1 = a2 & 0x7fff;                                           // 0x00113518: andi $v1, $a2, 0x7fff
    /* FPU: subu.qb $zero, $t6, $v0 */                          // 0x0011351c: subu.qb $zero, $t6, $v0
    a3 = 0xf3ff << 16;                                          // 0x00113528: lui $a3, 0xf3ff
    a3 = a3 | 0xffff;                                           // 0x0011352c: ori $a3, $a3, 0xffff
    a3 = a3 | 0xffff;                                           // 0x00113534: ori $a3, $a3, 0xffff
    a3 = a3 | 0xffff;                                           // 0x0011353c: ori $a3, $a3, 0xffff
    v0 = -0x8000;                                               // 0x00113544: addiu $v0, $zero, -0x8000
    a0 = a0 & v0;                                               // 0x00113550: and $a0, $a0, $v0
    a1 = a1 & v0;                                               // 0x00113558: and $a1, $a1, $v0
    a0 = a0 | v1;                                               // 0x0011355c: or $a0, $a0, $v1
    v0 = 4;                                                     // 0x00113560: addiu $v0, $zero, 4
    v1 = 0 | 0x8000;                                            // 0x00113564: ori $v1, $zero, 0x8000
    a1 = a1 | v0;                                               // 0x00113568: or $a1, $a1, $v0
    a0 = a0 | v1;                                               // 0x0011356c: or $a0, $a0, $v1
    v0 = -1;                                                    // 0x00113570: addiu $v0, $zero, -1
    v1 = -0x10;                                                 // 0x00113578: addiu $v1, $zero, -0x10
    a1 = a1 & v0;                                               // 0x0011357c: and $a1, $a1, $v0
    t3 = t3 & v1;                                               // 0x00113580: and $t3, $t3, $v1
    a0 = a0 & a3;                                               // 0x00113584: and $a0, $a0, $a3
    a2 = a2 | t4;                                               // 0x00113594: or $a2, $a2, $t4
    v0 = 0 | 0x8000;                                            // 0x0011359c: ori $v0, $zero, 0x8000
    v1 = 0xe;                                                   // 0x001135a4: addiu $v1, $zero, 0xe
    a3 = 0 | 0x8000;                                            // 0x001135a8: ori $a3, $zero, 0x8000
    a1 = a1 | v0;                                               // 0x001135b8: or $a1, $a1, $v0
    t2 = t2 | t0;                                               // 0x001135bc: or $t2, $t2, $t0
    t3 = t3 | v1;                                               // 0x001135c0: or $t3, $t3, $v1
    a0 = a0 | a3;                                               // 0x001135c4: or $a0, $a0, $a3
    a2 = a2 | t5;                                               // 0x001135d4: or $a2, $a2, $t5
    t1 = t1 | t4;                                               // 0x001135d8: or $t1, $t1, $t4
    v0 = 0x50;                                                  // 0x001135dc: addiu $v0, $zero, 0x50
    v1 = 0x51;                                                  // 0x001135e0: addiu $v1, $zero, 0x51
    a3 = 0x52;                                                  // 0x001135e4: addiu $a3, $zero, 0x52
    t0 = 0x53;                                                  // 0x001135e8: addiu $t0, $zero, 0x53
    /* memory sync */                                           // 0x00113618: sync 
    v0 = 6;                                                     // 0x0011361c: addiu $v0, $zero, 6
label_0x113620:
    return;                                                     // 0x00113624: jr $ra
    sp = sp + 0x10;                                             // 0x00113628: addiu $sp, $sp, 0x10
}