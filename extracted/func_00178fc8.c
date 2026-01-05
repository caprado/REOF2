void func_00178fc8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x40;                                            // 0x00178fc8: addiu $sp, $sp, -0x40
    s3 = 1;                                                     // 0x00178fe4: addiu $s3, $zero, 1
    *(uint32_t*)(s2) = 0;                                       // 0x00178fec: sw $zero, 0($s2)
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00178ff0: lw $v0, 4($s0)
    func_00178f48();  // 178f48                                // 0x00178ff4: jal 0x178f48
    s1 = v0 + 0x20;                                             // 0x00178ff8: addiu $s1, $v0, 0x20
    if (v0 != s3) goto label_0x179010;                          // 0x00178ffc: bnel $v0, $s3, 0x179010
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00179000: lw $v0, 8($s0)
    goto label_0x17909c;                                        // 0x00179004: b 0x17909c
    /* nop */                                                   // 0x0017900c: nop 
label_0x179010:
    v0 = ((unsigned)v0 < (unsigned)0x800) ? 1 : 0;              // 0x00179010: sltiu $v0, $v0, 0x800
    if (v0 == 0) goto label_0x179030;                           // 0x00179014: beqz $v0, 0x179030
    a1 = 0x23 << 16;                                            // 0x00179018: lui $a1, 0x23
    v1 = -1;                                                    // 0x0017901c: addiu $v1, $zero, -1
    goto label_0x17909c;                                        // 0x00179024: b 0x17909c
    *(uint32_t*)(s0) = v1;                                      // 0x00179028: sw $v1, 0($s0)
    /* nop */                                                   // 0x0017902c: nop 
label_0x179030:
    a2 = 0x18;                                                  // 0x00179034: addiu $a2, $zero, 0x18
    func_00107a20();  // 107a20                                // 0x00179038: jal 0x107a20
    a1 = &str_00229668;  // "COMPO"                             // 0x0017903c: addiu $a1, $a1, -0x6998
    if (v0 == 0) goto label_0x179060;                           // 0x00179048: beqz $v0, 0x179060
    a2 = sp + 4;                                                // 0x0017904c: addiu $a2, $sp, 4
    v0 = -1;                                                    // 0x00179050: addiu $v0, $zero, -1
    *(uint32_t*)(s0) = v0;                                      // 0x00179054: sw $v0, 0($s0)
    goto label_0x17909c;                                        // 0x00179058: b 0x17909c
label_0x179060:
    v0 = 2;                                                     // 0x00179060: addiu $v0, $zero, 2
    func_001793b0();  // 1793b0                                // 0x00179064: jal 0x1793b0
    *(uint32_t*)(s0) = v0;                                      // 0x00179068: sw $v0, 0($s0)
    if (v0 == 0) goto label_0x17909c;                           // 0x0017906c: beqz $v0, 0x17909c
    v1 = local_0;                                               // 0x00179070: lw $v1, 0($sp)
    v0 = 1;                                                     // 0x00179074: addiu $v0, $zero, 1
    a1 = local_4;                                               // 0x00179078: lw $a1, 4($sp)
    a0 = v1 << 1;                                               // 0x0017907c: sll $a0, $v1, 1
    a0 = a0 + v1;                                               // 0x00179080: addu $a0, $a0, $v1
    a0 = a0 << 3;                                               // 0x00179084: sll $a0, $a0, 3
    a0 = a0 + v1;                                               // 0x00179088: addu $a0, $a0, $v1
    a0 = a0 << 2;                                               // 0x0017908c: sll $a0, $a0, 2
    a0 = a0 + a1;                                               // 0x00179090: addu $a0, $a0, $a1
    *(uint32_t*)((s0) + 0xc) = a0;                              // 0x00179094: sw $a0, 0xc($s0)
    *(uint32_t*)(s2) = s3;                                      // 0x00179098: sw $s3, 0($s2)
label_0x17909c:
    return;                                                     // 0x001790b0: jr $ra
    sp = sp + 0x40;                                             // 0x001790b4: addiu $sp, $sp, 0x40
}