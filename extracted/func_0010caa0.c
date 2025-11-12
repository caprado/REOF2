void func_0010caa0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0010caa0: addiu $sp, $sp, -0x30
    v0 = s2 + 0x40;                                             // 0x0010cab0: addiu $v0, $s2, 0x40
    a1 = *(int32_t*)((s2) + 0x30);                              // 0x0010cac4: lw $a1, 0x30($s2)
    if (a1 != v0) goto label_0x10cb28;                          // 0x0010cac8: bnel $a1, $v0, 0x10cb28
    s3 = *(int32_t*)((s2) + 0x34);                              // 0x0010cacc: lw $s3, 0x34($s2)
    a0 = *(int32_t*)((s2) + 0x54);                              // 0x0010cad0: lw $a0, 0x54($s2)
    func_00107908();  // 0x1071e0                                // 0x0010cad4: jal 0x1071e0
    a1 = 0x400;                                                 // 0x0010cad8: addiu $a1, $zero, 0x400
    if (s1 == 0) goto label_0x10cb68;                           // 0x0010cae0: beqz $s1, 0x10cb68
    v0 = -1;                                                    // 0x0010cae4: addiu $v0, $zero, -1
    v0 = 0x400;                                                 // 0x0010cae8: addiu $v0, $zero, 0x400
    *(uint32_t*)((s2) + 0x30) = s1;                             // 0x0010caec: sw $s1, 0x30($s2)
    *(uint32_t*)((s2) + 0x34) = v0;                             // 0x0010caf0: sw $v0, 0x34($s2)
    s3 = 2;                                                     // 0x0010caf4: addiu $s3, $zero, 2
    s1 = s1 + 0x3fd;                                            // 0x0010caf8: addiu $s1, $s1, 0x3fd
    a0 = s2 + 0x42;                                             // 0x0010cafc: addiu $a0, $s2, 0x42
label_0x10cb00:
    v1 = *(uint8_t*)(a0);                                       // 0x0010cb00: lbu $v1, 0($a0)
    a0 = a0 + -1;                                               // 0x0010cb04: addiu $a0, $a0, -1
    v0 = s1 + s3;                                               // 0x0010cb08: addu $v0, $s1, $s3
    s3 = s3 + -1;                                               // 0x0010cb0c: addiu $s3, $s3, -1
    /* nop */                                                   // 0x0010cb10: nop 
    if (s3 >= 0) goto label_0x10cb00;                           // 0x0010cb14: bgez $s3, 0x10cb00
    *(uint8_t*)(v0) = v1;                                       // 0x0010cb18: sb $v1, 0($v0)
    *(uint32_t*)(s2) = s1;                                      // 0x0010cb1c: sw $s1, 0($s2)
    goto label_0x10cb68;                                        // 0x0010cb20: b 0x10cb68
label_0x10cb28:
    a0 = *(int32_t*)((s2) + 0x54);                              // 0x0010cb28: lw $a0, 0x54($s2)
    s4 = s3 << 1;                                               // 0x0010cb2c: sll $s4, $s3, 1
    func_0010a020();  // 0x109a80                                // 0x0010cb30: jal 0x109a80
    if (s1 == 0) goto label_0x10cb68;                           // 0x0010cb3c: beqz $s1, 0x10cb68
    v0 = -1;                                                    // 0x0010cb40: addiu $v0, $zero, -1
    s0 = s1 + s3;                                               // 0x0010cb44: addu $s0, $s1, $s3
    func_00107b68();  // 0x107ab8                                // 0x0010cb50: jal 0x107ab8
    *(uint32_t*)(s2) = s0;                                      // 0x0010cb58: sw $s0, 0($s2)
    *(uint32_t*)((s2) + 0x34) = s4;                             // 0x0010cb5c: sw $s4, 0x34($s2)
    *(uint32_t*)((s2) + 0x30) = s1;                             // 0x0010cb64: sw $s1, 0x30($s2)
label_0x10cb68:
    return;                                                     // 0x0010cb80: jr $ra
    sp = sp + 0x30;                                             // 0x0010cb84: addiu $sp, $sp, 0x30
}