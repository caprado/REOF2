void func_00192dc0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00192dc0: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s0 */                          // 0x00192dc8: addu.qb $zero, $sp, $s0
    *(float*)(sp) = FPU_F20;  // Store float                    // 0x00192dcc: swc1 $f20, 0($sp)
    /* FPU: mov.s $f20, $f12 */                                 // 0x00192dd4: mov.s $f20, $f12
label_0x192ddc:
    v0 = a0 << 2;                                               // 0x00192ddc: sll $v0, $a0, 2
    v1 = s0 + v0;                                               // 0x00192de0: addu $v1, $s0, $v0
    a0 = a0 + 1;                                                // 0x00192de4: addiu $a0, $a0, 1
    FPU_F0 = *(float*)((v1) + 0xdc);  // Load float             // 0x00192de8: lwc1 $f0, 0xdc($v1)
    v0 = (a0 < 0xa) ? 1 : 0;                                    // 0x00192dec: slti $v0, $a0, 0xa
    if (v0 != 0) goto label_0x192ddc;                           // 0x00192df0: bnez $v0, 0x192ddc
    *(float*)((v1) + 0x104) = FPU_F0;  // Store float           // 0x00192df4: swc1 $f0, 0x104($v1)
    a0 = *(int32_t*)((s0) + 0xd4);                              // 0x00192df8: lw $a0, 0xd4($s0)
    if (a0 == 0) goto label_0x192e2c;                           // 0x00192dfc: beqz $a0, 0x192e2c
    /* nop */                                                   // 0x00192e00: nop 
    func_00192230();  // 0x192200                                // 0x00192e04: jal 0x192200
    /* nop */                                                   // 0x00192e08: nop 
    v1 = *(int32_t*)((s0) + 0xd8);                              // 0x00192e0c: lw $v1, 0xd8($s0)
    a1 = s0 + 0xdc;                                             // 0x00192e10: addiu $a1, $s0, 0xdc
    v0 = *(int32_t*)((gp) + -0x64dc);                           // 0x00192e14: lw $v0, -0x64dc($gp)
    a2 = s0 + 0x104;                                            // 0x00192e18: addiu $a2, $s0, 0x104
    /* FPU: mov.s $f12, $f20 */                                 // 0x00192e1c: mov.s $f12, $f20
    a3 = s0 + 0x15c;                                            // 0x00192e20: addiu $a3, $s0, 0x15c
    func_00193e90();  // 0x193d00                                // 0x00192e24: jal 0x193d00
    a0 = v1 + v0;                                               // 0x00192e28: addu $a0, $v1, $v0
label_0x192e2c:
    a0 = s0 + 0x40;                                             // 0x00192e2c: addiu $a0, $s0, 0x40
    func_00193a80();  // 0x193a20                                // 0x00192e30: jal 0x193a20
    a1 = s0 + 0x104;                                            // 0x00192e34: addiu $a1, $s0, 0x104
    a0 = *(int32_t*)((s0) + 0xd0);                              // 0x00192e38: lw $a0, 0xd0($s0)
    if (a0 == 0) goto label_0x192e4c;                           // 0x00192e3c: beqz $a0, 0x192e4c
    /* FPU: mov.s $f12, $f20 */                                 // 0x00192e40: mov.s $f12, $f20
    func_00192e80();  // 0x192dc0                                // 0x00192e44: jal 0x192dc0
    /* nop */                                                   // 0x00192e48: nop 
label_0x192e4c:
    a0 = *(int32_t*)((s0) + 0xcc);                              // 0x00192e4c: lw $a0, 0xcc($s0)
    if (a0 == 0) goto label_0x192e60;                           // 0x00192e50: beqz $a0, 0x192e60
    /* FPU: mov.s $f12, $f20 */                                 // 0x00192e54: mov.s $f12, $f20
    func_00192e80();  // 0x192dc0                                // 0x00192e58: jal 0x192dc0
    /* nop */                                                   // 0x00192e5c: nop 
label_0x192e60:
    FPU_F20 = *(float*)(sp);  // Load float                     // 0x00192e64: lwc1 $f20, 0($sp)
    /* FPU: aver_u.h $w0, $w0, $w16 */                          // 0x00192e68: aver_u.h $w0, $w0, $w16
    v0 = 1;                                                     // 0x00192e6c: addiu $v0, $zero, 1
    return;                                                     // 0x00192e70: jr $ra
    sp = sp + 0x30;                                             // 0x00192e74: addiu $sp, $sp, 0x30
}