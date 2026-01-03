void func_00192b40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00192b40: addiu $sp, $sp, -0x20
    func_0018db00();  // 18db00                                // 0x00192b4c: jal 0x18db00
    v1 = *(uint16_t*)(v0);                                      // 0x00192b54: lhu $v1, 0($v0)
    v1 = v1 & 0x8000;                                           // 0x00192b58: andi $v1, $v1, 0x8000
    if (v1 == 0) goto label_0x192b74;                           // 0x00192b5c: beqz $v1, 0x192b74
    /* nop */                                                   // 0x00192b60: nop 
    FPU_F0 = *(float*)((v0) + 0xc);  // Load float              // 0x00192b64: lwc1 $f0, 0xc($v0)
    *(float*)(s0) = FPU_F0;  // Store float                     // 0x00192b68: swc1 $f0, 0($s0)
    goto label_0x192b7c;                                        // 0x00192b6c: b 0x192b7c
    v0 = 1;                                                     // 0x00192b70: addiu $v0, $zero, 1
label_0x192b74:
    *(uint32_t*)(s0) = 0;                                       // 0x00192b74: sw $zero, 0($s0)
label_0x192b7c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x00192b80: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x00192b84: jr $ra
    sp = sp + 0x20;                                             // 0x00192b88: addiu $sp, $sp, 0x20
}