void func_001b9b00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001b9b00: addiu $sp, $sp, -0x20
    if (a0 >= 0) goto label_0x1b9b28;                           // 0x001b9b08: bgez $a0, 0x1b9b28
    func_001ac9a0();  // 0x1ac990                                // 0x001b9b10: jal 0x1ac990
    /* nop */                                                   // 0x001b9b14: nop 
    func_001adc60();  // 0x1adbe0                                // 0x001b9b18: jal 0x1adbe0
    /* nop */                                                   // 0x001b9b1c: nop 
    goto label_0x1b9bdc;                                        // 0x001b9b20: b 0x1b9bdc
label_0x1b9b28:
    v0 = 0x56 << 16;                                            // 0x001b9b28: lui $v0, 0x56
    a0 = a0 << 2;                                               // 0x001b9b2c: sll $a0, $a0, 2
    v0 = v0 + 0x4900;                                           // 0x001b9b30: addiu $v0, $v0, 0x4900
    v1 = a1 << 2;                                               // 0x001b9b34: sll $v1, $a1, 2
    v0 = v0 + a0;                                               // 0x001b9b38: addu $v0, $v0, $a0
    v0 = g_00564900;  // Global at 0x00564900                   // 0x001b9b3c: lw $v0, 0($v0)
    func_001ac9a0();  // 0x1ac990                                // 0x001b9b40: jal 0x1ac990
    s0 = v0 + v1;                                               // 0x001b9b44: addu $s0, $v0, $v1
    func_001adc60();  // 0x1adbe0                                // 0x001b9b48: jal 0x1adbe0
    /* nop */                                                   // 0x001b9b4c: nop 
    a0 = *(int16_t*)(s0);                                       // 0x001b9b50: lh $a0, 0($s0)
    at = ((unsigned)a0 < (unsigned)0xc) ? 1 : 0;                // 0x001b9b54: sltiu $at, $a0, 0xc
    if (at == 0) goto label_0x1b9bdc;                           // 0x001b9b58: beqz $at, 0x1b9bdc
    v1 = 0x24 << 16;                                            // 0x001b9b60: lui $v1, 0x24
    v0 = a0 << 2;                                               // 0x001b9b64: sll $v0, $a0, 2
    v1 = v1 + -0x2280;                                          // 0x001b9b68: addiu $v1, $v1, -0x2280
    v0 = v0 + v1;                                               // 0x001b9b6c: addu $v0, $v0, $v1
    v0 = g_00564900;  // Global at 0x00564900                   // 0x001b9b70: lw $v0, 0($v0)
    /* jump to address in v0 */                                 // 0x001b9b74: jr $v0
    /* nop */                                                   // 0x001b9b78: nop 
    func_001b8020();  // 0x1b8000                                // 0x001b9b7c: jal 0x1b8000
    a0 = *(int16_t*)((s0) + 2);                                 // 0x001b9b80: lh $a0, 2($s0)
    goto label_0x1b9bd8;                                        // 0x001b9b84: b 0x1b9bd8
    /* nop */                                                   // 0x001b9b88: nop 
    a1 = *(int16_t*)((s0) + 2);                                 // 0x001b9b8c: lh $a1, 2($s0)
    func_001ad530();  // 0x1ad420                                // 0x001b9b94: jal 0x1ad420
    goto label_0x1b9bd8;                                        // 0x001b9b9c: b 0x1b9bd8
    /* nop */                                                   // 0x001b9ba0: nop 
    at = 0x49 << 16;                                            // 0x001b9ba4: lui $at, 0x49
    v1 = g_00491341;  // Global at 0x00491341                   // 0x001b9ba8: lbu $v1, 0x1341($at)
    if (v1 == 0) goto label_0x1b9bc0;                           // 0x001b9bac: beqz $v1, 0x1b9bc0
    a1 = a0 + -4;                                               // 0x001b9bb0: addiu $a1, $a0, -4
    v0 = a0 + -3;                                               // 0x001b9bb4: addiu $v0, $a0, -3
    if (v1 == v0) goto label_0x1b9bc8;                          // 0x001b9bb8: beq $v1, $v0, 0x1b9bc8
    /* nop */                                                   // 0x001b9bbc: nop 
label_0x1b9bc0:
    func_001b9ca0();  // 0x1b9c10                                // 0x001b9bc0: jal 0x1b9c10
label_0x1b9bc8:
    a1 = *(int16_t*)((s0) + 2);                                 // 0x001b9bc8: lh $a1, 2($s0)
    a0 = 1;                                                     // 0x001b9bcc: addiu $a0, $zero, 1
    func_001ad530();  // 0x1ad420                                // 0x001b9bd0: jal 0x1ad420
    a2 = 5;                                                     // 0x001b9bd4: addiu $a2, $zero, 5
label_0x1b9bd8:
label_0x1b9bdc:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b9be0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b9be4: jr $ra
    sp = sp + 0x20;                                             // 0x001b9be8: addiu $sp, $sp, 0x20
}