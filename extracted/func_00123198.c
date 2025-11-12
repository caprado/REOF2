void func_00123198() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_50, local_58, local_8, local_c;
    
    sp = sp + -0x50;                                            // 0x00123198: addiu $sp, $sp, -0x50
    v0 = (a1 < 0x1000) ? 1 : 0;                                 // 0x0012319c: slti $v0, $a1, 0x1000
    a2 = sp + 4;                                                // 0x001231e0: addiu $a2, $sp, 4
    t0 = sp + 0xc;                                              // 0x001231e4: addiu $t0, $sp, 0xc
    if (v0 == 0) goto label_0x123200;                           // 0x001231e8: beqz $v0, 0x123200
    a3 = sp + 8;                                                // 0x001231ec: addiu $a3, $sp, 8
    *(uint16_t*)(s1) = 0;                                       // 0x001231f0: sh $zero, 0($s1)
    goto label_0x123280;                                        // 0x001231f4: b 0x123280
    v0 = -1;                                                    // 0x001231f8: addiu $v0, $zero, -1
    /* nop */                                                   // 0x001231fc: nop 
label_0x123200:
    func_00123130();  // 0x122da0                                // 0x00123200: jal 0x122da0
    /* nop */                                                   // 0x00123204: nop 
    if (v1 == 0) goto label_0x123280;                           // 0x0012320c: beqz $v1, 0x123280
    v0 = -1;                                                    // 0x00123210: addiu $v0, $zero, -1
    v1 = v1 - s0;                                               // 0x00123214: subu $v1, $v1, $s0
    a0 = v1 << 0x10;                                            // 0x00123218: sll $a0, $v1, 0x10
    if (a0 <= 0) goto label_0x123280;                           // 0x0012321c: blez $a0, 0x123280
    *(uint16_t*)(s1) = v1;                                      // 0x00123220: sh $v1, 0($s1)
    v1 = local_4;                                               // 0x00123224: lbu $v1, 4($sp)
    a3 = -1;                                                    // 0x00123228: addiu $a3, $zero, -1
    a2 = local_0;                                               // 0x0012322c: lw $a2, 0($sp)
    t0 = 1;                                                     // 0x00123230: addiu $t0, $zero, 1
    a0 = local_8;                                               // 0x00123234: lbu $a0, 8($sp)
    *(uint32_t*)(s3) = a2;                                      // 0x0012323c: sw $a2, 0($s3)
    a1 = local_c;                                               // 0x00123240: lw $a1, 0xc($sp)
    *(uint8_t*)(s2) = v1;                                       // 0x00123244: sb $v1, 0($s2)
    *(uint8_t*)(s4) = a0;                                       // 0x00123248: sb $a0, 0($s4)
    v1 = local_50;                                              // 0x0012324c: lw $v1, 0x50($sp)
    *(uint32_t*)(v1) = a1;                                      // 0x00123250: sw $a1, 0($v1)
    *(uint8_t*)(s5) = a3;                                       // 0x00123254: sb $a3, 0($s5)
    a0 = *(int8_t*)(s4);                                        // 0x00123258: lb $a0, 0($s4)
    v1 = *(int8_t*)(s2);                                        // 0x0012325c: lb $v1, 0($s2)
    /* multiply: v1 * a0 -> hi:lo */                            // 0x00123260: mult $ac3, $v1, $a0
    a0 = (v1 < 0) ? 1 : 0;                                      // 0x00123264: slti $a0, $v1, 0
    a1 = v1 + 7;                                                // 0x00123268: addiu $a1, $v1, 7
    if (a0 != 0) v1 = a1;                                       // 0x0012326c: movn $v1, $a1, $a0
    a0 = local_58;                                              // 0x00123270: lw $a0, 0x58($sp)
    v1 = v1 >> 3;                                               // 0x00123274: sra $v1, $v1, 3
    *(uint8_t*)(s6) = v1;                                       // 0x00123278: sb $v1, 0($s6)
    *(uint32_t*)(a0) = t0;                                      // 0x0012327c: sw $t0, 0($a0)
label_0x123280:
    return;                                                     // 0x001232a0: jr $ra
    sp = sp + 0x50;                                             // 0x001232a4: addiu $sp, $sp, 0x50
}