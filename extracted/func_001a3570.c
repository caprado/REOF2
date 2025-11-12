void func_001a3570() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a3570: addiu $sp, $sp, -0x10
    func_001a3320();  // 0x1a32e0                                // 0x001a3580: jal 0x1a32e0
    at = (v0 < t2) ? 1 : 0;                                     // 0x001a3588: slt $at, $v0, $t2
    if (at == 0) goto label_0x1a359c;                           // 0x001a358c: beqz $at, 0x1a359c
    goto label_0x1a3610;                                        // 0x001a3594: b 0x1a3610
    v0 = -1;                                                    // 0x001a3598: addiu $v0, $zero, -1
label_0x1a359c:
    a1 = 5;                                                     // 0x001a359c: addiu $a1, $zero, 5
    func_001a32e0();  // 0x1a3230                                // 0x001a35a0: jal 0x1a3230
    if (v0 != 0) goto label_0x1a35b8;                           // 0x001a35a8: bnez $v0, 0x1a35b8
    a0 = v0 + 0xc;                                              // 0x001a35ac: addiu $a0, $v0, 0xc
    goto label_0x1a3610;                                        // 0x001a35b0: b 0x1a3610
    v0 = -1;                                                    // 0x001a35b4: addiu $v0, $zero, -1
label_0x1a35b8:
    goto label_0x1a35cc;                                        // 0x001a35b8: b 0x1a35cc
label_0x1a35c0:
    v0 = *(int32_t*)((a0) + 8);                                 // 0x001a35c0: lw $v0, 8($a0)
    v1 = v1 + 1;                                                // 0x001a35c4: addiu $v1, $v1, 1
    a0 = a0 + v0;                                               // 0x001a35c8: addu $a0, $a0, $v0
label_0x1a35cc:
    v0 = (v1 < t2) ? 1 : 0;                                     // 0x001a35cc: slt $v0, $v1, $t2
    /* nop */                                                   // 0x001a35d0: nop 
    if (v0 != 0) goto label_0x1a35c0;                           // 0x001a35d4: bnez $v0, 0x1a35c0
    /* nop */                                                   // 0x001a35d8: nop 
    a0 = a0 + 0xc;                                              // 0x001a35dc: addiu $a0, $a0, 0xc
    goto label_0x1a3604;                                        // 0x001a35e0: b 0x1a3604
label_0x1a35e8:
    v0 = *(int32_t*)(a0);                                       // 0x001a35e8: lw $v0, 0($a0)
    v1 = v1 + 1;                                                // 0x001a35ec: addiu $v1, $v1, 1
    v0 = t0 << 2;                                               // 0x001a35f8: sll $v0, $t0, 2
    v0 = v0 + 4;                                                // 0x001a35fc: addiu $v0, $v0, 4
    a0 = a0 + v0;                                               // 0x001a3600: addu $a0, $a0, $v0
label_0x1a3604:
    at = (t1 < v1) ? 1 : 0;                                     // 0x001a3604: slt $at, $t1, $v1
    if (at == 0) goto label_0x1a35e8;                           // 0x001a3608: beqz $at, 0x1a35e8
label_0x1a3610:
    return;                                                     // 0x001a3614: jr $ra
    sp = sp + 0x10;                                             // 0x001a3618: addiu $sp, $sp, 0x10
}