void func_001326c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001326c8: addiu $sp, $sp, -0x10
    if (a0 == 0) goto label_0x1326dc;                           // 0x001326cc: beqz $a0, 0x1326dc
    if (a1 >= 0) goto label_0x1326f0;                           // 0x001326d4: bgez $a1, 0x1326f0
    v0 = a1 << 2;                                               // 0x001326d8: sll $v0, $a1, 2
label_0x1326dc:
    a0 = 0x22 << 16;                                            // 0x001326dc: lui $a0, 0x22
    func_00127de8();  // 0x127d90                                // 0x001326e0: jal 0x127d90
    a0 = &str_00223b18;  // "E02080835 ADXT_GetIbufRemainTime: parameter error" // 0x001326e4: addiu $a0, $a0, 0x3b18
    goto label_0x132724;                                        // 0x001326e8: b 0x132724
    v0 = -1;                                                    // 0x001326ec: addiu $v0, $zero, -1
label_0x1326f0:
    v0 = v0 + a0;                                               // 0x001326f0: addu $v0, $v0, $a0
    v0 = *(int32_t*)((v0) + 0x18);                              // 0x001326f4: lw $v0, 0x18($v0)
    if (v0 == 0) goto label_0x132720;                           // 0x001326f8: beqz $v0, 0x132720
    v1 = *(int32_t*)(v0);                                       // 0x00132700: lw $v1, 0($v0)
    v0 = *(int32_t*)((v1) + 0x24);                              // 0x00132704: lw $v0, 0x24($v1)
    /* call function at address in v0 */                        // 0x00132708: jalr $v0
    a1 = 1;                                                     // 0x0013270c: addiu $a1, $zero, 1
    v1 = (unsigned)v0 >> 0x1f;                                  // 0x00132710: srl $v1, $v0, 0x1f
    v1 = v1 + v0;                                               // 0x00132714: addu $v1, $v1, $v0
    goto label_0x132724;                                        // 0x00132718: b 0x132724
    v0 = v1 >> 1;                                               // 0x0013271c: sra $v0, $v1, 1
label_0x132720:
label_0x132724:
    return;                                                     // 0x00132728: jr $ra
    sp = sp + 0x10;                                             // 0x0013272c: addiu $sp, $sp, 0x10
}