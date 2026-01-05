void func_001cab20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001cab20: addiu $sp, $sp, -0x20
    func_001ca280();  // 1ca280                                // 0x001cab2c: jal 0x1ca280
    if (v0 == 0) goto label_0x1cab48;                           // 0x001cab34: beqz $v0, 0x1cab48
    /* nop */                                                   // 0x001cab38: nop 
    goto label_0x1caba8;                                        // 0x001cab3c: b 0x1caba8
    /* nop */                                                   // 0x001cab40: nop 
    /* nop */                                                   // 0x001cab44: nop 
label_0x1cab48:
    func_001ca8b0();  // 1ca8b0                                // 0x001cab48: jal 0x1ca8b0
    if (v0 != 0) goto label_0x1cab60;                           // 0x001cab50: bnez $v0, 0x1cab60
    /* nop */                                                   // 0x001cab54: nop 
    goto label_0x1caba8;                                        // 0x001cab58: b 0x1caba8
    v0 = -1;                                                    // 0x001cab5c: addiu $v0, $zero, -1
label_0x1cab60:
    v1 = g_ff000010;  // Global at 0xff000010                   // 0x001cab60: lw $v1, 0x10($v0)
    a0 = 0xff << 16;                                            // 0x001cab64: lui $a0, 0xff
    v1 = *(int32_t*)(v1);                                       // 0x001cab68: lw $v1, 0($v1)
    v0 = 0xff00 << 16;                                          // 0x001cab6c: lui $v0, 0xff00
    a3 = *(uint8_t*)((v1) + 1);                                 // 0x001cab70: lbu $a3, 1($v1)
    a1 = *(uint8_t*)((v1) + 2);                                 // 0x001cab74: lbu $a1, 2($v1)
    a2 = *(uint8_t*)(v1);                                       // 0x001cab78: lbu $a2, 0($v1)
    a3 = a3 << 8;                                               // 0x001cab7c: sll $a3, $a3, 8
    a3 = a3 & 0xff00;                                           // 0x001cab80: andi $a3, $a3, 0xff00
    a1 = a1 << 0x10;                                            // 0x001cab84: sll $a1, $a1, 0x10
    v1 = *(uint8_t*)((v1) + 3);                                 // 0x001cab88: lbu $v1, 3($v1)
    a2 = a2 | a3;                                               // 0x001cab8c: or $a2, $a2, $a3
    a0 = a1 & a0;                                               // 0x001cab90: and $a0, $a1, $a0
    a0 = a0 | a2;                                               // 0x001cab94: or $a0, $a0, $a2
    v1 = v1 << 0x18;                                            // 0x001cab98: sll $v1, $v1, 0x18
    v0 = v1 & v0;                                               // 0x001cab9c: and $v0, $v1, $v0
    v0 = v0 | a0;                                               // 0x001caba0: or $v0, $v0, $a0
    /* nop */                                                   // 0x001caba4: nop 
label_0x1caba8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cabac: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cabb0: jr $ra
    sp = sp + 0x20;                                             // 0x001cabb4: addiu $sp, $sp, 0x20
}