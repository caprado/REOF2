void func_001b24c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b24c0: addiu $sp, $sp, -0x20
    v0 = *(int16_t*)((gp) + -0x6368);                           // 0x001b24cc: lh $v0, -0x6368($gp)
    if (v0 != 0) goto label_0x1b24e0;                           // 0x001b24d0: bnez $v0, 0x1b24e0
    /* nop */                                                   // 0x001b24d4: nop 
    goto label_0x1b251c;                                        // 0x001b24d8: b 0x1b251c
label_0x1b24e0:
    v1 = *(int32_t*)((gp) + -0x6370);                           // 0x001b24e0: lw $v1, -0x6370($gp)
    a0 = v0 + -1;                                               // 0x001b24e4: addiu $a0, $v0, -1
    v0 = 0x31 << 16;                                            // 0x001b24e8: lui $v0, 0x31
    v0 = v0 + -0x7d50;                                          // 0x001b24f0: addiu $v0, $v0, -0x7d50
    a2 = 0x20;                                                  // 0x001b24f4: addiu $a2, $zero, 0x20
    a3 = *(uint16_t*)(v1);                                      // 0x001b24f8: lhu $a3, 0($v1)
    v1 = v1 + 2;                                                // 0x001b24fc: addiu $v1, $v1, 2
    *(uint16_t*)((gp) + -0x6368) = a0;                          // 0x001b2500: sh $a0, -0x6368($gp)
    *(uint32_t*)((gp) + -0x6370) = v1;                          // 0x001b2504: sw $v1, -0x6370($gp)
    v1 = a3 << 5;                                               // 0x001b2508: sll $v1, $a3, 5
    s0 = v0 + v1;                                               // 0x001b250c: addu $s0, $v0, $v1
    func_00107d30();  // 0x107c70                                // 0x001b2510: jal 0x107c70
label_0x1b251c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b2520: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b2524: jr $ra
    sp = sp + 0x20;                                             // 0x001b2528: addiu $sp, $sp, 0x20
}