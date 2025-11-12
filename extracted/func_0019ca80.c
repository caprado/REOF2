void func_0019ca80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_2c;
    
    sp = sp + -0x30;                                            // 0x0019ca80: addiu $sp, $sp, -0x30
    v0 = 0x29 << 16;                                            // 0x0019ca84: lui $v0, 0x29
    v0 = v0 + -0x7380;                                          // 0x0019ca8c: addiu $v0, $v0, -0x7380
    local_2c = a0;                                              // 0x0019ca94: sw $a0, 0x2c($sp)
    v1 = local_2c;                                              // 0x0019ca98: lhu $v1, 0x2c($sp)
    a0 = v1 + -1;                                               // 0x0019ca9c: addiu $a0, $v1, -1
    v1 = a0 << 3;                                               // 0x0019caa0: sll $v1, $a0, 3
    v1 = v1 - a0;                                               // 0x0019caa4: subu $v1, $v1, $a0
    v1 = v1 << 3;                                               // 0x0019caa8: sll $v1, $v1, 3
    s0 = v0 + v1;                                               // 0x0019caac: addu $s0, $v0, $v1
label_0x19cab0:
    v0 = 3;                                                     // 0x0019cab0: addiu $v0, $zero, 3
    if (a1 == v0) goto label_0x19caf0;                          // 0x0019cab4: beq $a1, $v0, 0x19caf0
    a0 = sp + 0x2c;                                             // 0x0019cab8: addiu $a0, $sp, 0x2c
    v0 = 2;                                                     // 0x0019cabc: addiu $v0, $zero, 2
    if (a1 == v0) goto label_0x19caec;                          // 0x0019cac0: beq $a1, $v0, 0x19caec
    /* nop */                                                   // 0x0019cac4: nop 
    v0 = 5;                                                     // 0x0019cac8: addiu $v0, $zero, 5
    if (a1 == v0) goto label_0x19caec;                          // 0x0019cacc: beq $a1, $v0, 0x19caec
    /* nop */                                                   // 0x0019cad0: nop 
    v0 = 4;                                                     // 0x0019cad4: addiu $v0, $zero, 4
    if (a1 == v0) goto label_0x19cb58;                          // 0x0019cad8: beq $a1, $v0, 0x19cb58
    /* nop */                                                   // 0x0019cadc: nop 
    v0 = 1;                                                     // 0x0019cae0: addiu $v0, $zero, 1
    if (a1 == v0) goto label_0x19cb58;                          // 0x0019cae4: beq $a1, $v0, 0x19cb58
    /* nop */                                                   // 0x0019cae8: nop 
label_0x19caec:
    a0 = sp + 0x2c;                                             // 0x0019caec: addiu $a0, $sp, 0x2c
label_0x19caf0:
    func_0019ed40();  // 0x19ec00                                // 0x0019caf0: jal 0x19ec00
    a1 = 1;                                                     // 0x0019caf4: addiu $a1, $zero, 1
    if (v0 != 0) goto label_0x19cb10;                           // 0x0019caf8: bnez $v0, 0x19cb10
    a1 = 4;                                                     // 0x0019cb00: addiu $a1, $zero, 4
    goto label_0x19cab0;                                        // 0x0019cb04: b 0x19cab0
    *(uint32_t*)(s0) = a1;                                      // 0x0019cb08: sw $a1, 0($s0)
label_0x19cb10:
    func_0019cd80();  // 0x19cb80                                // 0x0019cb10: jal 0x19cb80
    /* nop */                                                   // 0x0019cb14: nop 
    func_0018c760();  // 0x18c750                                // 0x0019cb18: jal 0x18c750
    a0 = *(int32_t*)((s0) + 8);                                 // 0x0019cb1c: lw $a0, 8($s0)
    func_0018dca0();  // 0x18dc30                                // 0x0019cb24: jal 0x18dc30
    a1 = 0x10;                                                  // 0x0019cb28: addiu $a1, $zero, 0x10
    a1 = 1;                                                     // 0x0019cb30: addiu $a1, $zero, 1
    func_0018cc10();  // 0x18cba0                                // 0x0019cb34: jal 0x18cba0
    a3 = 0x29 << 16;                                            // 0x0019cb40: lui $a3, 0x29
    func_0018cff0();  // 0x18ce40                                // 0x0019cb50: jal 0x18ce40
    a3 = a3 + -0x350;                                           // 0x0019cb54: addiu $a3, $a3, -0x350
label_0x19cb58:
    v1 = *(int32_t*)((gp) + -0x6444);                           // 0x0019cb58: lw $v1, -0x6444($gp)
    v0 = 1;                                                     // 0x0019cb5c: addiu $v0, $zero, 1
    v1 = v1 + 1;                                                // 0x0019cb60: addiu $v1, $v1, 1
    *(uint32_t*)((gp) + -0x6444) = v1;                          // 0x0019cb64: sw $v1, -0x6444($gp)
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x0019cb6c: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x0019cb70: jr $ra
    sp = sp + 0x30;                                             // 0x0019cb74: addiu $sp, $sp, 0x30
}