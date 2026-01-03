void func_0017abb8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_10, local_14, local_20, local_24, local_28, local_2c, local_4;
    uint32_t local_8, local_c;
    
    sp = sp + -0x60;                                            // 0x0017abb8: addiu $sp, $sp, -0x60
    func_0017a928();  // 17a928                                // 0x0017abd8: jal 0x17a928
    v0 = s0 + 4;                                                // 0x0017abe0: addiu $v0, $s0, 4
    a0 = *(int32_t*)((s0) + 0x48);                              // 0x0017abe4: lw $a0, 0x48($s0)
    t2 = *(int32_t*)((v0) + 4);                                 // 0x0017abe8: lw $t2, 4($v0)
    t0 = s0 + 0x14;                                             // 0x0017abec: addiu $t0, $s0, 0x14
    v1 = *(int32_t*)((v0) + 8);                                 // 0x0017abf0: lw $v1, 8($v0)
    t1 = s0 + 0x24;                                             // 0x0017abf4: addiu $t1, $s0, 0x24
    a2 = *(int32_t*)(v0);                                       // 0x0017abf8: lw $a2, 0($v0)
    v0 = (unsigned)a0 >> 0x1f;                                  // 0x0017abfc: srl $v0, $a0, 0x1f
    /* multiply: t2 * v1 -> hi:lo */                            // 0x0017ac00: mult $ac3, $t2, $v1
    a0 = a0 + v0;                                               // 0x0017ac04: addu $a0, $a0, $v0
    a3 = *(int32_t*)(t0);                                       // 0x0017ac08: lw $a3, 0($t0)
    a0 = a0 >> 1;                                               // 0x0017ac0c: sra $a0, $a0, 1
    a1 = *(int32_t*)(t1);                                       // 0x0017ac10: lw $a1, 0($t1)
    t5 = t2 << 2;                                               // 0x0017ac14: sll $t5, $t2, 2
    t3 = *(int32_t*)((t0) + 4);                                 // 0x0017ac18: lw $t3, 4($t0)
    v0 = (unsigned)v1 >> 0x1f;                                  // 0x0017ac1c: srl $v0, $v1, 0x1f
    t4 = *(int32_t*)((s2) + 8);                                 // 0x0017ac20: lw $t4, 8($s2)
    v1 = v1 + v0;                                               // 0x0017ac24: addu $v1, $v1, $v0
    t0 = *(int32_t*)((t1) + 4);                                 // 0x0017ac28: lw $t0, 4($t1)
    v0 = (unsigned)v1 >> 0x1f;                                  // 0x0017ac2c: srl $v0, $v1, 0x1f
    v1 = v1 >> 1;                                               // 0x0017ac30: sra $v1, $v1, 1
    v0 = v1 + v0;                                               // 0x0017ac34: addu $v0, $v1, $v0
    t1 = *(int32_t*)((s0) + 0x44);                              // 0x0017ac38: lw $t1, 0x44($s0)
    v0 = v0 >> 1;                                               // 0x0017ac3c: sra $v0, $v0, 1
    a2 = a2 + v1;                                               // 0x0017ac40: addu $a2, $a2, $v1
    a1 = a1 + v0;                                               // 0x0017ac44: addu $a1, $a1, $v0
    a3 = a3 + v0;                                               // 0x0017ac48: addu $a3, $a3, $v0
    local_0 = a2;                                               // 0x0017ac4c: sw $a2, 0($sp)
    local_4 = a3;                                               // 0x0017ac50: sw $a3, 4($sp)
    local_8 = a1;                                               // 0x0017ac54: sw $a1, 8($sp)
    local_10 = t3;                                              // 0x0017ac58: sw $t3, 0x10($sp)
    local_14 = t0;                                              // 0x0017ac5c: sw $t0, 0x14($sp)
    local_20 = s1;                                              // 0x0017ac60: sw $s1, 0x20($sp)
    local_24 = t1;                                              // 0x0017ac64: sw $t1, 0x24($sp)
    local_28 = a0;                                              // 0x0017ac68: sw $a0, 0x28($sp)
    if (t4 != 0) goto label_0x17ac80;                           // 0x0017ac6c: bnez $t4, 0x17ac80
    local_c = t2;                                               // 0x0017ac70: sw $t2, 0xc($sp)
    goto label_0x17ac84;                                        // 0x0017ac74: b 0x17ac84
    local_2c = t5;                                              // 0x0017ac78: sw $t5, 0x2c($sp)
    /* nop */                                                   // 0x0017ac7c: nop 
label_0x17ac80:
    local_2c = t4;                                              // 0x0017ac80: sw $t4, 0x2c($sp)
label_0x17ac84:
    func_0017ced8();  // 17ced8                                // 0x0017ac84: jal 0x17ced8
    /* nop */                                                   // 0x0017ac88: nop 
    v1 = 1;                                                     // 0x0017ac8c: addiu $v1, $zero, 1
    if (v0 != v1) goto label_0x17acb0;                          // 0x0017ac90: bne $v0, $v1, 0x17acb0
    a2 = *(int32_t*)((s2) + 0x3c);                              // 0x0017ac98: lw $a2, 0x3c($s2)
    func_00148f78();  // 148f78                                // 0x0017ac9c: jal 0x148f78
    a1 = sp + 0x20;                                             // 0x0017aca0: addiu $a1, $sp, 0x20
    goto label_0x17acbc;                                        // 0x0017aca4: b 0x17acbc
    /* nop */                                                   // 0x0017acac: nop 
label_0x17acb0:
    func_00148f70();  // 148f70                                // 0x0017acb0: jal 0x148f70
    a1 = sp + 0x20;                                             // 0x0017acb4: addiu $a1, $sp, 0x20
label_0x17acbc:
    return;                                                     // 0x0017acc8: jr $ra
    sp = sp + 0x60;                                             // 0x0017accc: addiu $sp, $sp, 0x60
}