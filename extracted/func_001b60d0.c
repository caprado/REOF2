void func_001b60d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b60d0: addiu $sp, $sp, -0x10
    v0 = (unsigned)a1 >> 8;                                     // 0x001b60d4: srl $v0, $a1, 8
    v0 = v0 & 0xff;                                             // 0x001b60dc: andi $v0, $v0, 0xff
    a2 = *(int32_t*)((a0) + 0x28);                              // 0x001b60e0: lw $a2, 0x28($a0)
    v0 = a2 + v0;                                               // 0x001b60e4: addu $v0, $a2, $v0
    v0 = *(uint8_t*)(v0);                                       // 0x001b60e8: lbu $v0, 0($v0)
    if (v0 == 0) goto label_0x1b6118;                           // 0x001b60ec: beqz $v0, 0x1b6118
    v1 = v0 << 9;                                               // 0x001b60f0: sll $v1, $v0, 9
    v0 = a1 & 0xff;                                             // 0x001b60f4: andi $v0, $a1, 0xff
    v1 = v1 + a2;                                               // 0x001b60f8: addu $v1, $v1, $a2
    v0 = v0 << 1;                                               // 0x001b60fc: sll $v0, $v0, 1
    v0 = v0 + v1;                                               // 0x001b6100: addu $v0, $v0, $v1
    v0 = *(uint16_t*)((v0) + -0x100);                           // 0x001b6104: lhu $v0, -0x100($v0)
    if (v0 == 0) goto label_0x1b6118;                           // 0x001b6108: beqz $v0, 0x1b6118
    /* nop */                                                   // 0x001b610c: nop 
    goto label_0x1b6134;                                        // 0x001b6110: b 0x1b6134
    v0 = v0 + -1;                                               // 0x001b6114: addiu $v0, $v0, -1
label_0x1b6118:
    v0 = *(int32_t*)((a0) + 0x94);                              // 0x001b6118: lw $v0, 0x94($a0)
    if (v0 != 0) goto label_0x1b612c;                           // 0x001b611c: bnez $v0, 0x1b612c
    a1 = 0x3f;                                                  // 0x001b6120: addiu $a1, $zero, 0x3f
    goto label_0x1b6134;                                        // 0x001b6124: b 0x1b6134
label_0x1b612c:
    func_001b60d0();  // 1b60d0                                // 0x001b612c: jal 0x1b60d0
    /* nop */                                                   // 0x001b6130: nop 
label_0x1b6134:
    return;                                                     // 0x001b6138: jr $ra
    sp = sp + 0x10;                                             // 0x001b613c: addiu $sp, $sp, 0x10
}